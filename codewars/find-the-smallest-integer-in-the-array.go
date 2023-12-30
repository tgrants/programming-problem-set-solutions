package kata

func SmallestIntegerFinder(numbers []int) int {
	smallest := numbers[0]
	for i := 1; i < len(numbers); i++ {
		if (numbers[i] < smallest) {
			smallest = numbers[i]
		}
	}
	return smallest
}