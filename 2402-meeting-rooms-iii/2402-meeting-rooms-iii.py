class Solution:
    def mostBooked(self, n: int, meetings: List[List[int]]) -> int:
        
        meetings = sorted(meetings)
        room_avail = {}
        
        res = -1
        max_count =0
        
        for m in meetings:
            start = m[0]
            end = m[1]
            
            least = inf
            l_room = -1
   
            for i in range(n):
                
                if i not in room_avail:
                    room_avail[i] = {'count': 0, 'curr': 0}
                if room_avail[i]['curr'] <= start:
                    room_avail[i]['count'] += 1
                    room_avail[i]['curr'] = end
                        
                    least = 0
                    l_room = -1
                    break
                    
                delay = room_avail[i]['curr'] - start
                    
                if least > delay:
                    least = delay
                    l_room = i
                
            
            if l_room != -1:
                room_avail[l_room]['count'] += 1
                room_avail[l_room]['curr'] = least+end
            

        
        for  i in room_avail:
            if room_avail[i]['count'] > max_count:
                max_count = room_avail[i]['count']
                res = i
        
        return res
        