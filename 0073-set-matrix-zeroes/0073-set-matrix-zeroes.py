class Solution(object):
    def setZeroes(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: None Do not return anything, modify matrix in-place instead.
        """
        
        zerows = []        
        zecols = []

        row = len(matrix)
        col = len(matrix[0])
        
        for i in range(row):
            for j in range(col):
                if matrix[i][j] == 0:
                    zerows.append(i)
                    zecols.append(j)
        
        for zero in zerows:
            for i in range(col):
                matrix[zero][i] = 0
                
        for zero in zecols:
            for i in range(row):
                matrix[i][zero] = 0
        
        return matrix
                
                
                    