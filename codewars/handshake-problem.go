// Handshake problem
// Go 1.20

package kata

import "math"

func GetParticipants(n int) int {
	if n == 0 { return 0 }
	return int(math.Ceil((1 + math.Sqrt(8 * float64(n))) / 2))
}