package kata

func GetSize(w, h, d int) (res [2]int) {
	res[0] = 2 * ((w * h) + (w * d) + (h * d))
	res[1] = w * h * d
	return
}