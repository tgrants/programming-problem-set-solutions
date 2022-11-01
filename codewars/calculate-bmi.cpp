#include <string>

std::string bmi(double w, double h) {
	double bmi = w / h / h;
	if (bmi <= 18.5) return "Underweight";
	if (bmi <= 25) return "Normal";
	if (bmi <= 30) return "Overweight";
	return "Obese";
}