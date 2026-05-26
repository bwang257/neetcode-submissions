class Solution:
    def calPoints(self, operations: List[str]) -> int:
        # no need for ord()
        ans = []
        for op in operations:
            if op == 'C':
                ans.pop()
            elif op == 'D':
                prev = int(ans[-1]) 
                ans.append(str(prev * 2))
            elif op == '+':
                prev1 = int(ans[-1])
                prev2 = int(ans[-2]) 
                ans.append(str(prev1 + prev2))
            else:
                ans.append(op)

        return sum(int(x) for x in ans)