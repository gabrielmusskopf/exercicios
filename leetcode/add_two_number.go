/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func addTwoNumbers(l1 *ListNode, l2 *ListNode) *ListNode {
    
    var l3 *ListNode
    var carry int

    for l1 != nil || l2 != nil || carry != 0 {
        sum := carry

        if l1 != nil {
            sum += (*l1).Val
            l1 = l1.Next
        } 
        if l2 != nil {
            sum += (*l2).Val 
            l2 = l2.Next
        } 
        if carry != 0 {
            carry = 0
        }
        if sum >= 10 {
            carry = sum / 10
            sum = sum % 10
        }

        cur := &ListNode{
            Val: sum,
        }

        if l3 == nil {
            l3 = cur
        } else {
            node := l3
            for node.Next != nil {
                node = node.Next
            }
            node.Next = cur
        }
    }

    return l3
}
