class Solution:
    def isPalindrome(self, s: str) -> bool:
        temp = ""
        
        for ch in s:
            if ch.isalpha():
                temp += ch.lower()
            elif ch.isnumeric():
                temp += ch
                
        return temp == temp[::-1]