class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        cnts = [0] * 3
        for num in nums:
            cnts[num] += 1
        
        idx = 0
        for color, cnt in enumerate(cnts):
            while cnt:
                nums[idx] = color
                cnt -= 1
                idx += 1

        