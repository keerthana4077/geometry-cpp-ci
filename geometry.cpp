#include "geometry.h"
#include <cmath>

double deg2rad(double deg) {
    return deg * (M_PI / 180.0);
}

double distance(double x1, double y1, double x2, double y2) {
    return std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
}

void rotate(double x, double y, double angle_deg, double& rx, double& ry) {
    double rad = deg2rad(angle_deg);
    rx = x * std::cos(rad) - y * std::sin(rad);
    ry = x * std::sin(rad) + y * std::cos(rad);
}
