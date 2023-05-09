func isPalindrome(x int) bool {
    if(x < 0) {
        return false
    }

    inv := 0 
    times := 0
    aux := x
    len := int(math.Ceil(math.Log10(float64(x + 1))))

    for times < len {
        l := aux % 10
        inv += l * int(math.Pow(10.0, float64(len - (times + 1))))
        aux /= 10
        times++
    }

    return inv == x
}
