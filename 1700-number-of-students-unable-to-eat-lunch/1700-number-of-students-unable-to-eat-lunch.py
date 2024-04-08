class Solution:
    def countStudents(self, students: List[int], sandwiches: List[int]) -> int:
        
        circular_sandwich = students.count(0)        
        square_sandwich = students.count(1)
        
        for sandwich in sandwiches:
            
            if sandwich == 0 and circular_sandwich == 0:
                return square_sandwich
            
            if sandwich == 1 and square_sandwich == 0:
                return circular_sandwich
            
            if sandwich == 0:
                circular_sandwich -= 1
            else:
                square_sandwich -= 1
        
        
        return 0