#include <cmath>

double circle_diameter(unsigned int sides, unsigned int side_length){
	return side_length / (tan(M_PI / sides));
}