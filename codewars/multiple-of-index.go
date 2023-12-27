package kata

func multipleOfIndex (ints []int) (res []int) {
	for i, n := range ints {
		if i > 0 && n % i == 0 {
			res = append(res, n)
		}
	}
	return
}