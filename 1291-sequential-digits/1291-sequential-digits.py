class Solution:
    def sequentialDigits(self, low: int, high: int) -> List[int]:
        
        ans = []
        
        digit,start,temp = 1,low,low
        
        while start >= 10:
            digit += 1
            start /= 10
        
        num = 0
        
                
        while num <= high:
            
            if num >= low:
                ans.append(num)
                
            temp = ""
            ts = int(start)
            for i in range(digit):
                temp += str(ts)
                ts += 1
                if ts == 10:
                    break
        
            
            if int(temp) == num:
                break
            elif int(temp) > num:
                num = int(temp)
                
            start += 1
            
            if ts == 10:
                digit += 1
                start = 1
            
        
        return ans 
        