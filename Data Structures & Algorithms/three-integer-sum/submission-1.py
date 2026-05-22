class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        # O(n^2 + nlogn) runtime, with O(1) space
    
        nums.sort()
        res  = []
        
        n = len(nums)
        for idx, num in enumerate(nums):

            # skip duplicates
            if idx > 0 and nums[idx-1] == num:
                print("skipping")
                continue

            ptr1 = idx + 1
            ptr2 = n-1
            while ptr1 < ptr2:
                sum_ = nums[ptr1] + nums[ptr2]
                if sum_ == -num:
                    new = [num, nums[ptr1], nums[ptr2]]

                    # ignore duplicates
                    if not res or res[-1] != [num, nums[ptr1], nums[ptr2]]:
                        res.append([num, nums[ptr1], nums[ptr2]])

                    if ptr1 == ptr2 - 1:
                        ptr2 -= 1
                    else:
                        ptr1 +=1
                elif sum_ < -num:
                    ptr1 += 1
                else:
                    ptr2 -= 1

        return res

