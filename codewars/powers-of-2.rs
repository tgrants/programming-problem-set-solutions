fn powers_of_two(n: u8) -> Vec<u128> {
	let mut res = Vec::new();
	for i in 0..=n {
		res.push(1 << i);
	}
	res
}