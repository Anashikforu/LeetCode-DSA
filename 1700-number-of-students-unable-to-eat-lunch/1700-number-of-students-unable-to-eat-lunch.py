class Solution:
    def countStudents(self, students: List[int], sandwiches: List[int]) -> int:
        
        i,j = 0,0
        
        while i<len(students) and j<len(sandwiches) :
            
            if(sandwiches[j] not in students[i:]):
                break
            
            if students[i] == sandwiches[j]:
                j += 1
            else:
                students.append(students[i])

            i += 1
        
        return len(sandwiches) - j
        
        