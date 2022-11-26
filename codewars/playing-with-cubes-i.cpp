class Cube {
	private:
		int side = 0;
	public:
		void SetSide(int side) {
			this -> side = side;
		}
		int GetSide() const {
			return side;
		}
};