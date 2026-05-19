class Solution:
    def majorityElement(self, nums: List[int]) -> int:

        # since majority element has to occur more than floor(n/2)
        # times

        # other O(n) approach would be to store and iterate through
        # hashmap

        cnt = 0
        res = 0
        for num in nums:
            if cnt == 0:
                res = num
            if num == res:
                cnt += 1
            else:
                cnt -= 1
        return res