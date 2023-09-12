package main

/**
* A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
*/

type TreeNode struct {
    Val int
    Left *TreeNode
    Right *TreeNode
}

func min(a, b int) int {
    if a < b {
        return a
    }
    return b
}

func minDepth(root *TreeNode) int {
    if root == nil {
        return 0
    }

    l, r := minDepth(root.Left), minDepth(root.Right)
    if l == 0 {
        return 1 + r
    }
    if r == 0 {
        return 1 + l
    }
    return 1 + min(l, r)
}

