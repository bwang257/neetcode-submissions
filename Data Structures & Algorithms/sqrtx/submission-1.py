class Solution:
    def mySqrt(self, x: int) -> int:
        # non negative integer
        left = 0
        right = x // 2 + 1
        mid = 0
        while left <= right:
            mid = left + (right - left) // 2
            print(mid)
            test = mid ** 2
            if test == x: 
                return mid
            elif test < x:
                left = mid + 1
            else:
                right = mid - 1
        
        if mid ** 2 > x:
            return mid - 1

        return mid