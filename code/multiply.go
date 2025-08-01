package main

import "C"

//export multiply
func multiply(a, b C.int) C.int {
    return a * b
}

func main() {} // Required but unused