package kata

func PositiveSum(numbers []int) int {
	sum := 0
	for _, n := range numbers {
		if n > 0 {
			sum += n
		}
	}
	return sum
}