func isPalindrome(x int) bool {
    inv := 0 
    aux := x
    
    for aux > 0 {
        l := aux % 10
        inv = inv*10 + l
        aux /= 10
    }

    return inv == x
}
