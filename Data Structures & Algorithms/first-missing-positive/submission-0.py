class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        ans = 1
        seen = set()
        for num in nums:
            seen.add(num)
            if ans == num:
                while ans in seen:
                    ans += 1
        return ans




