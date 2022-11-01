int duty_free(int price, int discount, int holiday_cost) {
	return holiday_cost * 100 / (price * discount);
}