package main

/**
* A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
*/

type TreeNode struct {
    Val int
    Left *TreeNode
    Right *TreeNode
}

func maxDepth(root *TreeNode) int {
    if root == nil {
        return 0
    }

    left := maxDepth(root.Left)
    right := maxDepth(root.Right)

    if left > right {
        return left+1; 
    }          
    return right+1;
}

