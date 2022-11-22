public class Kata
{
	public static string WhatDay(int n)
	{
		string[] days = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
		return n < 1 || n > 7 ? "Wrong, please enter a number between 1 and 7" : days[n - 1];
	}
}