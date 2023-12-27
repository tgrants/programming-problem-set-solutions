package kata

import "strconv"

func Derive(coefficient, exponent int) string {
	return strconv.Itoa(coefficient * exponent) + "x^" + strconv.Itoa(exponent - 1)
}