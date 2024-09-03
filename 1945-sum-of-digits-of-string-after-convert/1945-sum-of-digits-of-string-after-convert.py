class Solution:
    def getLucky(self, s: str, k: int) -> int:
        alphabet = ['a','b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
        
        num = 0
        temp = ''
        for string in s:
            temp += str(alphabet.index(string) + 1)
        
        while k > 0 :
            
            num = 0
            for string in temp:
                num += int(string)
            temp = str(num)
            k -= 1
            
        return num
            
            