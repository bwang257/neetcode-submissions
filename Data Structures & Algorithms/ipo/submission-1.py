class Solution:
    def findMaximizedCapital(self, k: int, w: int, profits: List[int], capital: List[int]) -> int:
        # O(nlogn) time complexity

        # load data 
        capital_pq = []
        for idx, cap in enumerate(capital):
            heapq.heappush(capital_pq, (cap, idx))

        # of the possible selections, 
        # we need to choose the profit maximizing project
        profits_pq = []

        while k > 0:
            # add possible projects
            while capital_pq and w >= capital_pq[0][0]:
                idx = heapq.heappop(capital_pq)[1]
                heapq.heappush_max(profits_pq, profits[idx])

            # do a project
            if not profits_pq: 
                break
                
            k-=1
            w+= heapq.heappop_max(profits_pq)

        return w



