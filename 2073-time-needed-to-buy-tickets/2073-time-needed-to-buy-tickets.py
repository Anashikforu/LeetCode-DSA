class Solution:
    def timeRequiredToBuy(self, tickets: List[int], k: int) -> int:
        
        time = 0
        
        while tickets[k] > 0:
            for i,val in enumerate(tickets):
                if tickets[i] > 0:
                    tickets[i] -= 1
                    time += 1
                    
                if tickets[i] == 0 and i == k:
                    break
        
        return time