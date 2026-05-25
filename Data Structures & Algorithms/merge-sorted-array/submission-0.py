class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        add_idx = m + n - 1
        ptr1 = m - 1
        ptr2 = n - 1
        while add_idx >= 0:
            if ptr1 >= 0 and ptr2 >= 0:
                if nums1[ptr1] >= nums2[ptr2]:
                    nums1[add_idx] = nums1[ptr1]
                    ptr1 -= 1
                else:
                    nums1[add_idx] = nums2[ptr2]
                    ptr2 -= 1
            elif ptr1 >= 0:
                nums1[add_idx] = nums1[ptr1]
                ptr1 -= 1
            else:
                nums1[add_idx] = nums2[ptr2]
                ptr2 -= 1
            add_idx -= 1


         