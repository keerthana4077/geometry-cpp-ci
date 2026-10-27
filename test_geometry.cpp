#include "geometry.h"
#include <iostream>
#include <cassert>
#include <cmath>

void assert_near(double actual, double expected, double tolerance = 1e-6) {
    assert(std::abs(actual - expected) < tolerance);
}

int main() {
    // Test deg2rad
    assert_near(deg2rad(180.0), M_PI);

    // Test distance
    assert_near(distance(0.0, 0.0, 3.0, 4.0), 5.0);

    // Test rotate
    double rx = 0.0, ry = 0.0;
    rotate(1.0, 0.0, 90.0, rx, ry);
    assert_near(rx, 0.0);
    assert_near(ry, 1.0);

    // Test scale
    double sx = 2.0, sy = 3.0;
    scale(sx, sy, 2.5); // 2.0 * 2.5 = 5.0, 3.0 * 2.5 = 7.5
    assert_near(sx, 5.0);
    assert_near(sy, 7.5);

    std::cout << "ALL tests passed" << std::endl;
    return 0;
}

