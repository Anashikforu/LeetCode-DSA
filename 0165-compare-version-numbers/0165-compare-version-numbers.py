class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:
        v1break = version1.split(".")
        v2break = version2.split(".")
        
        i,j=0,0
        
        while(i<len(v1break) and j<len(v2break)):
            if(int(v1break[i]) > int(v2break[j])):
                return 1
            elif(int(v1break[i]) < int(v2break[j])):
                return -1
            i += 1
            j += 1
        
        while(i<len(v1break)):
            if(int(v1break[i]) > 0):
                return 1
            i += 1
        
        while(j<len(v2break)):
            if(int(v2break[j]) > 0):
                return -1
            j += 1
        
        return 0