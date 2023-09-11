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
     var stack []*TreeNode
     stack = append(stack, p, q)

     for len(stack) > 0 {
         p, q := stack[0], stack[1]
         stack = stack[2:]

         if p == nil && q == nil {
             continue
         }
         if (p == nil && q != nil) || (p != nil && q == nil) {
             return false
         }
         if (p.Val != q.Val) {
             return false
         }

         stack = append(stack, p.Left, q.Left, p.Right, q.Right)
     }

     return true
 }
