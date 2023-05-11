/*
Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].

Input: digits = [9]
Output: [1,0]
Explanation: The array represents the integer 9.
Incrementing by one gives 9 + 1 = 10.
Thus, the result should be [1,0].
*/
func plusOne(digits []int) []int {
    lastIndx := len(digits) - 1

    for i := lastIndx; i >= 0; i-- {
        sum := digits[i] + 1

        if sum > 9 {
            digits[i] = 0
        } else {
            digits[i] = sum
            return digits
        }

    } 

   
    return append([]int{1}, digits...)
}
