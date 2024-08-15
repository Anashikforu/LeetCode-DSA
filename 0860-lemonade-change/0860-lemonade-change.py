class Solution:
    def lemonadeChange(self, bills: List[int]) -> bool:
        
        def change(index,fives, tens):
            # print(index,fives, tens)
            if index == len(bills):
                return True
            
            if bills[index] == 5:
                return change(index+1,fives+1, tens)
            elif bills[index] == 10:
                if fives < 0:
                    return False
                return change(index+1,fives-1, tens+1)
            elif bills[index] == 20:
                # Option 1: Use a $10 bill and a $5 bill
                if tens > 0 and fives > 0:
                    if change(index+1, fives-1, tens-1):
                        return True
                # Option 2: Use three $5 bills
                if fives >= 3:
                    if change(index+1, fives-3, tens):
                        return True
                return False
                
        
        return change(0,0,0)
        