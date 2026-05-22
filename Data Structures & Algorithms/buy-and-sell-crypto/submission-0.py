class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        pft = 0
        curr_min = prices[0]
        for idx in range(len(prices)):
            px = prices[idx]
            if px < curr_min:
                curr_min = px
            else:
                pot_pft = px - curr_min
                if pot_pft > pft:
                    pft = pot_pft
        return pft