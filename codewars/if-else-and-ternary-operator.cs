public class Kata
{
	public static int SaleHotDogs(int n)
	{
		return n * (n < 5 ? 100 : n < 10 ? 95 : 90);
	}
}