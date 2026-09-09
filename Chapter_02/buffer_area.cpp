#include <cmath>
#include <iostream>
#include <vector>

struct Point {
    double x;
    double y;
};

int main() {
    Point center{};
    int pointCount = 0;

    std::cout << "Enter center coordinates (x y): ";
    std::cin >> center.x >> center.y;

    std::cout << "Enter number of points: ";
    std::cin >> pointCount;

    if (pointCount < 0) {
        std::cerr << "The number of points cannot be negative.\n";
        return 1;
    }

    std::vector<Point> points(pointCount);
    for (int index = 0; index < pointCount; ++index) {
        std::cout << "Enter point " << index + 1 << " coordinates (x y): ";
        std::cin >> points[index].x >> points[index].y;
    }

    int bufferCount = 0;
    std::cout << "Enter number of buffers: ";
    std::cin >> bufferCount;

    if (bufferCount < 0) {
        std::cerr << "The number of buffers cannot be negative.\n";
        return 1;
    }

    for (int bufferIndex = 0; bufferIndex < bufferCount; ++bufferIndex) {
        double radius = 0.0;
        std::cout << "Enter radius for buffer " << bufferIndex + 1 << ": ";
        std::cin >> radius;

        if (radius < 0.0) {
            std::cerr << "A buffer radius cannot be negative.\n";
            return 1;
        }

        std::cout << "Points within radius " << radius << ":\n";
        bool foundPoint = false;
        for (int pointIndex = 0; pointIndex < pointCount; ++pointIndex) {
            const double xDifference = points[pointIndex].x - center.x;
            const double yDifference = points[pointIndex].y - center.y;
            const double distanceSquared = xDifference * xDifference
                + yDifference * yDifference;

            if (distanceSquared <= radius * radius) {
                std::cout << "Point " << pointIndex + 1 << ": ("
                          << points[pointIndex].x << ", "
                          << points[pointIndex].y << ")\n";
                foundPoint = true;
            }
        }

        if (!foundPoint) {
            std::cout << "None\n";
        }
    }

    return 0;
}
