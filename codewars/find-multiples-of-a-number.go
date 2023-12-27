package kata

func FindMultiples(integer, limit int) (res []int) {
	for i := integer; i <= limit; i += integer {
		res = append(res, i)
	}
	return
}