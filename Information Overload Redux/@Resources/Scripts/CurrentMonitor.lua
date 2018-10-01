function Update()
   currentMonitor = 1
   numMonitors = SELF:GetNumberOption('NumMonitors', 1)
   
   if (numMonitors > 0) then
      skin = {}
      skin['x'] = tonumber(SKIN:GetVariable('CURRENTCONFIGX'))
      skin['y'] = tonumber(SKIN:GetVariable('CURRENTCONFIGY'))
   
      for i = numMonitors, 1, -1 do
         monitorL = tonumber(SKIN:GetVariable('SCREENAREAX@'..i))
         monitorT = tonumber(SKIN:GetVariable('SCREENAREAY@'..i))
         monitorW = tonumber(SKIN:GetVariable('SCREENAREAWIDTH@'..i))
         monitorH = tonumber(SKIN:GetVariable('SCREENAREAHEIGHT@'..i))
         
         monitor = {}
         monitor['A'] = {['x']=monitorL; ['y']=monitorT}
         monitor['B'] = {['x']=monitorL+monitorW-1; ['y']=monitorT}
         monitor['C'] = {['x']=monitorL+monitorW-1; ['y']=monitorT+monitorH-1}
         monitor['D'] = {['x']=monitorL; ['y']=monitorT+monitorH-1}
         
         aRect = math.abs((monitor.A.y-monitor.C.y)*(monitor.D.x-monitor.B.x)+(monitor.B.y-monitor.D.y)*(monitor.A.x-monitor.C.x))/2
         
         aTri = {}
         aTri['pAB'] = math.abs(skin.x*(monitor.A.y-monitor.B.y)+monitor.A.x*(monitor.B.y-skin.y)+monitor.B.x*(skin.y-monitor.A.y))/2
         aTri['pBC'] = math.abs(skin.x*(monitor.B.y-monitor.C.y)+monitor.B.x*(monitor.C.y-skin.y)+monitor.C.x*(skin.y-monitor.B.y))/2
         aTri['pCD'] = math.abs(skin.x*(monitor.C.y-monitor.D.y)+monitor.C.x*(monitor.D.y-skin.y)+monitor.D.x*(skin.y-monitor.C.y))/2
         aTri['pAD'] = math.abs(skin.x*(monitor.A.y-monitor.D.y)+monitor.A.x*(monitor.D.y-skin.y)+monitor.D.x*(skin.y-monitor.A.y))/2
         
         aTriSum = aTri['pAB'] + aTri['pBC'] + aTri['pCD'] + aTri['pAD']
         
         if aRect == aTriSum then
            currentMonitor = i
            break
         end
      end
   end
   
   return currentMonitor
end