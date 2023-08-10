long long factorial(int n){
	return n ? n * factorial(n - 1) : 1;
}