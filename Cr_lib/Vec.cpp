#include <iostream>

double Dist(double x1, double x2, double y1, double y2) {
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}