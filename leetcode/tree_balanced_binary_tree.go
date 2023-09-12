package main

/**
* A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
*/

type TreeNode struct {
    Val int
    Left *TreeNode
    Right *TreeNode
}

func abs(a int) int {
    if a >= 0 {
        return a
    }
    return -a
}

func max(a, b int) int {
    if a > b {
        return a
    }
    return b
}

func depth(n *TreeNode) int {
    if n == nil {
        return 0
    }
    return 1 + max(depth(n.Left), depth(n.Right))
}

func isBalanced(root *TreeNode) bool {
    if root == nil {
        return true
    }
    if abs(depth(root.Left) - depth(root.Right)) > 1{
        return false
    }
    return isBalanced(root.Left) && isBalanced(root.Right)
}
