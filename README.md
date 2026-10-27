# Geometry C++ CI Project

![C++ CMake CI](https://github.com)

A lightweight geometry utility library written in C++11, structured as a static library with rigorous automated test verifications and integrated Continuous Integration (CI).

## Features Included
* **`deg2rad(double)`**: Converts degree values to uniform radians.
* **`distance(x1, y1, x2, y2)`**: Computes the true Euclidean distance between two spatial points.
* **`rotate(x, y, angle)`**: Shifts coordinates counter-clockwise around the origin $(0,0)$.

## Compiling and Running Locally
To compile the library and verify the tests manually on Ubuntu, execute:

```bash
mkdir -p build && cd build
cmake ..
make
./test_geometry
```
