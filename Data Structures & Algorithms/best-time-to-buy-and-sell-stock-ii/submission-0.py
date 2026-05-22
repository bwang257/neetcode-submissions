class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        pft = 0
        for idx in range(1, len(prices)):
            if prices[idx] > prices[idx-1]:
                pft += prices[idx] - prices[idx-1]
        return pft