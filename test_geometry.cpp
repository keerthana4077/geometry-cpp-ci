#include "geometry.h"
#include <iostream>
#include <cassert>
#include <cmath>

// Helper function to assert double equality within a tolerance
void assert_near(double actual, double expected, double tolerance = 1e-6) {
    assert(std::abs(actual - expected) < tolerance);
}

int main() {
    // Test deg2rad
    assert_near(deg2rad(180.0), M_PI);
    assert_near(deg2rad(90.0), M_PI / 2.0);
    assert_near(deg2rad(0.0), 0.0);

    // Test distance
    assert_near(distance(0.0, 0.0, 3.0, 4.0), 5.0);
    assert_near(distance(1.0, 1.0, 1.0, 5.0), 4.0);

    // Test rotate
    double rx = 0.0, ry = 0.0;
    rotate(1.0, 0.0, 90.0, rx, ry); // Rotating (1,0) by 90 degrees should give (0,1)
    assert_near(rx, 0.0);
    assert_near(ry, 1.0);

    std::cout << "ALL tests passed" << std::endl;
    return 0;
}
