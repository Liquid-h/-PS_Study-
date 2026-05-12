class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        if root == None:
            return []
        self.result = []
        while root != None:
            if root.left == None:
                self.result.append(root.val)
                root = root.right
            else:
                pre = root.left
                while pre.right != None and pre.right != root:
                    pre = pre.right
                if pre.right == None:
                    pre.right = root
                    root = root.left
                else:
                    pre.right = None
                    self.result.append(root.val)
                    root = root.right
        return self.result