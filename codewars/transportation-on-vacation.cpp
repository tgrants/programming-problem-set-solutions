int rental_car_cost(int d){
	return d * 40 - 20 * (d > 2) - 30 * (d > 6);
}