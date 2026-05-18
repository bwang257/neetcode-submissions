class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        k = 0
        for idx, num in enumerate(nums):
            if val == num:
                continue
            nums[k], nums[idx] = nums[idx], nums[k]
            k += 1
        return k

        