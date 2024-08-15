class Solution:
    def lemonadeChange(self, bills: List[int]) -> bool:
        
        fives, tens = 0,0
        
        for val in bills:
            if val == 5:
                fives += 1
            elif val == 10:
                if fives < 0:
                    return False
                fives -= 1
                tens += 1
            elif val == 20:
                if tens > 0 and fives > 0:
                    fives -= 1
                    tens -= 1
                elif fives >= 3:
                    fives -= 3
                else:
                    return False
                
        
        return True
        