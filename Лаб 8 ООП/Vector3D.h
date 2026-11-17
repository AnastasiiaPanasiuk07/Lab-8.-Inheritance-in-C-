#pragma once
#include "Triad.h"

class vector3D : public Triad {
public:
    vector3D(double x = 0.0, double y = 0.0, double z = 0.0);

    vector3D operator+(const vector3D& other) const;
    double dotProduct(const vector3D& other) const;

    void print() const override;
};