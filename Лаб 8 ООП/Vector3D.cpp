#include "Vector3D.h"
#include <iostream>

vector3D::vector3D(double x, double y, double z) : Triad(x, y, z) {}

vector3D vector3D::operator+(const vector3D& other) const {
    return vector3D(first + other.first, second + other.second, third + other.third);
}

double vector3D::dotProduct(const vector3D& other) const {
    return (first * other.first) + (second * other.second) + (third * other.third);
}

void vector3D::print() const {
    std::cout << "vector3D(" << first << ", " << second << ", " << third << ")";
}