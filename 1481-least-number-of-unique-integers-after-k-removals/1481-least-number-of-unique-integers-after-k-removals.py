class Solution:
    def findLeastNumOfUniqueInts(self, arr: List[int], k: int) -> int:
        
        num_dict = {}
        
        for num in arr:
            if num not in num_dict:
                num_dict[num] = 0
            num_dict[num] += 1
        
        num_dict = dict(sorted(num_dict.items(), key=lambda x:x[1]))
        # print(num_dict)
        res = len(num_dict)
        
        for num in num_dict:
            # print(k)
            if k>0:
                if k >= num_dict[num]:
                    res -= 1
                k -=num_dict[num]
            else:
                break
        
        
        return res