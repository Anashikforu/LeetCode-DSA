class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        
        res = [[1]]
        
        for i in range(1,numRows):
            new_row = [1]
            last_row = res[i-1]
            for j in range(1,i):
                new_row.append(last_row[j-1]+last_row[j])
            new_row.append(1)
            res.append(new_row)
        
        return res
            
            
        