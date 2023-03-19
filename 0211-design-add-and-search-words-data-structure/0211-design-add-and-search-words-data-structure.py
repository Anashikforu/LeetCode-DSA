class WordDictionary:

    def __init__(self):
        self.dictionary = []

    def addWord(self, word: str) -> None:
        self.dictionary.append(word)
        return None

    def search(self, word: str) -> bool:
        if "." not in word:
            return word in  self.dictionary
        

        for dict_word in self.dictionary:
            if len(dict_word) != len(word):
                continue
            
            chk = 1
            for i in range(len(word)):
                if word[i] == ".":
                    continue
                elif word[i] != dict_word[i]:
                    chk = 0
                    break
            if chk == 1:
                return True

        return False


# Your WordDictionary object will be instantiated and called as such:
# obj = WordDictionary()
# obj.addWord(word)
# param_2 = obj.search(word)