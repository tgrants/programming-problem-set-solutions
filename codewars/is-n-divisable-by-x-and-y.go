package kata

func IsDivisible(n, x, y int) bool {
	return n % x + n % y == 0
}