package kata


func Invert(arr []int) []int {
	var res []int
	for i := range arr {
		res = append(res, -arr[i])
	}
	return res
}