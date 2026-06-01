# Definition for a binary tree node.
# Input: root = [1,0,1,0,1,0,1]
# Output: 22
# Explanation: (100) + (101) + (110) + (111) = 4 + 5 + 6 + 7 = 22
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

from typing import Optional


class Solution:

    def dfs(self, node: Optional[TreeNode], path: int) -> int:
        if not node:
            return 0
        path = (path << 1) | node.val
        if not node.left and not node.right:
            return path
        return self.dfs(node.left, path) + self.dfs(node.right, path)

    def sumRootToLeaf(self, root: Optional[TreeNode]) -> int:
        return self.dfs(root, 0)
    
if __name__ == "__main__":
    # Create test tree: [1,0,1,0,1,0,1] 
    
