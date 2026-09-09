// Geometry: area of a triangle) Write a program that prompts the user to enter the
// three points (x1, y1), (x2, y2), and (x3, y3) of a triangle and displays its area.
// The formula for computing the area of a triangle is s = (side1 + side2 + side3) / 2
// Area = sqrt(s(s-side1)(s-side2)(s-side3))
// Example: Enter three points for a triangle: 1.5, -3.4, 4.6, 5, 9.5, -3.4 
// The area of the triangle is 33.6

#include <cmath>
#include <iomanip>
#include <iostream>

struct Point {
	double x;
	double y;
};

double distanceBetween(const Point& firstPoint, const Point& secondPoint) {
	const double xDifference = firstPoint.x - secondPoint.x;
	const double yDifference = firstPoint.y - secondPoint.y;
	return std::sqrt(xDifference * xDifference + yDifference * yDifference);
}

bool readPoint(Point& point) {
	char separator = 0;

	if (!(std::cin >> point.x)) {
		return false;
	}

	if (std::cin.peek() == ',') {
		std::cin.get(separator);
	}

	return static_cast<bool>(std::cin >> point.y);
}

int main() {
	Point firstPoint{};
	Point secondPoint{};
	Point thirdPoint{};

	std::cout << "Enter three points for a triangle: ";
	if (!readPoint(firstPoint) || !readPoint(secondPoint)
		|| !readPoint(thirdPoint)) {
		std::cerr << "Invalid point coordinates.\n";
		return 1;
	}

	const double firstSide = distanceBetween(secondPoint, thirdPoint);
	const double secondSide = distanceBetween(firstPoint, thirdPoint);
	const double thirdSide = distanceBetween(firstPoint, secondPoint);
	const double semiPerimeter = (firstSide + secondSide + thirdSide) / 2.0;
	const double areaSquared = semiPerimeter
		* (semiPerimeter - firstSide)
		* (semiPerimeter - secondSide)
		* (semiPerimeter - thirdSide);

	const double area = areaSquared > 0.0 ? std::sqrt(areaSquared) : 0.0;

	std::cout << std::fixed << std::setprecision(1)
			  << "The area of the triangle is " << area << '\n';

	return 0;
}
