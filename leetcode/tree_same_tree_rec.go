package main
/**
 * Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).
 */

 type TreeNode struct {
     Val int
     Left *TreeNode
     Right *TreeNode
 }

 func isSameTree(p *TreeNode, q *TreeNode) bool {
     if p == q {
         return true
     }
     if p == nil || q == nil || p.Val != q.Val {
         return false
     }
     if isSameTree(p.Left, q.Left) {
         return isSameTree(p.Right, q.Right)
     }
     return false
 }
