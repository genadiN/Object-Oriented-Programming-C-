
#pragma once


class Vector4D {
    double first;
    double second;
    double third;
    double fourth;
public:

    Vector4D();
    Vector4D(double, double, double, double);
    Vector4D(const Vector4D& rhs);
    Vector4D& operator=(const Vector4D& rhs);
    Vector4D operator=(const double number) const;

    Vector4D add(const Vector4D& rhs) const;
    Vector4D difference(const Vector4D& rhs) const;
    Vector4D multiply(const Vector4D& rhs) const;
    Vector4D divide(const Vector4D& rhs) const;

    double& operator[](const int index);
    Vector4D operator+(const Vector4D& rhs) const;
    Vector4D& operator+=(const Vector4D& rhs);
    Vector4D operator-(const Vector4D& rhs) const;
    Vector4D& operator-=(const Vector4D& rhs);
    Vector4D operator*(const Vector4D& rhs) const;
    Vector4D operator*(const double number) const;
    Vector4D& operator*=(const Vector4D& rhs);
    Vector4D& operator*=(const double number);
    Vector4D operator/(const Vector4D& rhs) const;
    Vector4D& operator/=(const Vector4D& rhs);
    bool operator==(const Vector4D& rhs) const;
    bool operator!=(const Vector4D& rhs) const;
    bool operator<(const Vector4D& rhs) const;
    bool operator>(const Vector4D& rhs) const;
    bool operator<=(const Vector4D& rhs) const;
    bool operator>=(const Vector4D& rhs) const;
    bool operator!() const;
    Vector4D operator-() const;
};
