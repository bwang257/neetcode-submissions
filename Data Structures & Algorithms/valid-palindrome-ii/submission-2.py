class Solution:
    def validPalindrome(self, s: str) -> bool:
        def is_palindrome(p):
            ptr1 = 0
            ptr2 = len(p)-1
            while ptr1 < ptr2:
                if p[ptr1] != p[ptr2]:
                    return False
                ptr1 +=1 
                ptr2 -= 1
            return True

        l = 0
        r = len(s) - 1
        errs = 0
        while l < r:
            if s[l] == s[r]:
                    l += 1
                    r -= 1
            elif s[l] != s[r]:
                if is_palindrome(s[l+1:r+1]):
                    return True
                elif is_palindrome(s[l:r]):
                    return True
                else: 
                    return False

        return True
            