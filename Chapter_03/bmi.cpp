// Write a program that prompts the user to enter a weight in pounds and height in inches and
// then displays the BMI. Note that one pound is 0.45359237 kilograms and one inch is
// 0.0254 meters. Listing 4.6 gives the program.

// Conditions
// Below 18.5 Underweight
// 18.5–24.9 Normal
// 25.0–29.9 Overweight
// Above 30.0 Obese

// Enter weight in pounds:
// Enter Weight in pounds: 146
// Enter height in inches: 70
// BMI is 20.95
// Normal

#include <iomanip>
#include <iostream>

int main() {
	constexpr double kilogramsPerPound = 0.45359237;
	constexpr double metersPerInch = 0.0254;

	double weightInPounds = 0.0;
	double heightInInches = 0.0;

	std::cout << "Enter weight in pounds: ";
	std::cin >> weightInPounds;
	std::cout << "Enter height in inches: ";
	std::cin >> heightInInches;

	if (!std::cin || weightInPounds <= 0.0 || heightInInches <= 0.0) {
		std::cerr << "Weight and height must be positive numbers.\n";
		return 1;
	}

	const double weightInKilograms = weightInPounds * kilogramsPerPound;
	const double heightInMeters = heightInInches * metersPerInch;
	const double bmi = weightInKilograms
		/ (heightInMeters * heightInMeters);

	std::cout << std::fixed << std::setprecision(2)
			  << "BMI is " << bmi << '\n';

	if (bmi < 18.5) {
		std::cout << "Underweight\n";
	} else if (bmi < 25.0) {
		std::cout << "Normal\n";
	} else if (bmi < 30.0) {
		std::cout << "Overweight\n";
	} else {
		std::cout << "Obese\n";
	}

	return 0;
}
