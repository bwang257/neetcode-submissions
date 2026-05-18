class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        curr_prefix = strs[0] # min len 1
        for idx in range(1, len(strs)):
            if not curr_prefix:
                return ""

            while curr_prefix:
                curr_len = len(curr_prefix)
                if curr_prefix == strs[idx][:curr_len]:
                    break
                curr_prefix = curr_prefix[:-1]      

        return curr_prefix
        