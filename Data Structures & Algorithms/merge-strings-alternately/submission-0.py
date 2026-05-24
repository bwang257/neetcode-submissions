class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        
        pt1 = 0
        pt2 = 0
        ans = ""

        while pt1 < len(word1) or pt2 < len(word2):
            if pt1 < len(word1):
                ans += word1[pt1]
                pt1 +=1
            if pt2 < len(word2):
                ans += word2[pt2]
                pt2 +=1
        
        return ans
