fn count_sheep(sheep: &[bool]) -> u8 {
	sheep.iter().filter(|&s| *s).count() as u8
}