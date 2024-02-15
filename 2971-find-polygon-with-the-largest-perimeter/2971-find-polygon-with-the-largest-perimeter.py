class Solution:
    def largestPerimeter(self, nums: List[int]) -> int:
        
        nums.sort();
        
        perimeter,temp = -1,0
        
        for num in nums:
            if temp > num:
                perimeter  = temp+num
            temp += num
        
        return perimeter
            
        