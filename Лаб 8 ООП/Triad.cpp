#include "Triad.h"
#include <iostream>

Triad::Triad(double f, double s, double t) : first(f), second(s), third(t) {}

Triad Triad::operator+(double value) const {
    return Triad(first + value, second + value, third + value);
}

Triad Triad::operator*(double value) const {
    return Triad(first * value, second * value, third * value);
}

bool Triad::operator==(const Triad& other) const {
    return (first == other.first) && (second == other.second) && (third == other.third);
}

void Triad::print() const {
    std::cout << "Triad(" << first << ", " << second << ", " << third << ")";
}

double Triad::getFirst() const { return first; }
double Triad::getSecond() const { return second; }
double Triad::getThird() const { return third; }