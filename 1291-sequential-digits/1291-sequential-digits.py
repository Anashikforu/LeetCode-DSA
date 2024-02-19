class Solution:
    def sequentialDigits(self, low: int, high: int) -> List[int]:
        
        ans = []
        digits_low = len(str(low))
        digits_high = len(str(high))
        superset = "123456789"
        
        num = 0
        start_digit = int(low/pow(10,digits_low-1))
        pos = start_digit-1
        digit = digits_low
        
        while num <= high:
            if num>=low:
                ans.append(num)
            
            if int(superset[pos:pos+digit]) == num:
                break
                
            num = int(superset[pos:pos+digit])
                
            pos += 1
            
            if num%10==9:
                pos = 0
                digit += 1
            

        return ans
        