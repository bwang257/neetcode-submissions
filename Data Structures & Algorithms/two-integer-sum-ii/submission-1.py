class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        ptr1 = 0
        ptr2 = len(numbers) - 1
        
        # there will always be a solution
        # return **1-indexed** indices
        while ptr1 <= ptr2:
            sum_ = numbers[ptr1] + numbers[ptr2]
            if sum_ == target:
                return [ptr1 + 1, ptr2 + 1]
            elif sum_ < target:
                ptr1 += 1
            else:
                ptr2 -= 1
        
        return [-1]
