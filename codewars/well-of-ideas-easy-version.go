package kata

func Well(x []string) string {
	good := 0
	for _, n := range x {
		if n == "good" {
			good += 1
			if good > 2 {
				return "I smell a series!"
			}
		}
	}
	if good > 0 {
		return "Publish!"
	}
	return "Fail!"
}