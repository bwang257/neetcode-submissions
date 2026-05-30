# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        if not p or not q:
            if p or q:
                return False
            else:
                return True

        if p.val != q.val:
            return False
        if p.left or q.left:
            if not q.left and p.left:
                return False
            else:
                if not self.isSameTree(p.left, q.left):
                    return False
        
        if p.right or q.right:
            if not p.right and q.right:
                return False
            else:
                if not self.isSameTree(p.right, q.right):
                    return False
        
        return True



