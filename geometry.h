#ifndef GEOMETRY_H
#define GEOMETRY_H

double deg2rad(double deg);
double distance(double x1, double y1, double x2, double y2);
void rotate(double x, double y, double angle_deg, double& rx, double& ry);

#endif // GEOMETRY_H
