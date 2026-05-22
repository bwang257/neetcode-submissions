class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        my_map = dict()
        for idx, num in enumerate(nums):
            if num in my_map and abs(idx- my_map[num]) <= k:
                    return True
            my_map[num]= idx
            
        return False