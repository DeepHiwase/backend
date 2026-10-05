package main

import (
	"fmt"
	"math"
	"math/rand"
)

func main() {
	fmt.Println("My favorite number is", rand.Intn(10)) // by deault, Println also add endl atlast
	fmt.Printf("Now you have %g problems.\n", math.Sqrt(7)) // printf -> formatted print, %g -> format specifier for float
	fmt.Println(math.Pi)
}
