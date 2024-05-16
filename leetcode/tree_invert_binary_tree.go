package main

/**
* A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
*/

type TreeNode struct {
    Val int
    Left *TreeNode
    Right *TreeNode
}

func invertTree(root *TreeNode) *TreeNode {
    if root == nil {
        return nil
    } 

    invertTree(root.Left)
    invertTree(root.Right)

    aux := root.Left
    root.Left = root.Right
    root.Right = aux

    return root
}
