class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        k = 0
        seen = set()
        for idx, num in enumerate(nums):
            if num not in seen:
                nums[k] = num
                k += 1
            seen.add(num)
        return k
        