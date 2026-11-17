#pragma once

class Triad {
protected:
    double first;
    double second;
    double third;

public:
    Triad(double f = 0.0, double s = 0.0, double t = 0.0);
    virtual ~Triad() = default;

    Triad operator+(double value) const;
    Triad operator*(double value) const;
    bool operator==(const Triad& other) const;

    virtual void print() const;

    double getFirst() const;
    double getSecond() const;
    double getThird() const;
};