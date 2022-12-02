int mango(int quantity, int price) {
	return (quantity / 3 * 2 + quantity % 3) * price;
	// return (quantity - quantity / 3) * price;
}