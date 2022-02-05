#pragma once
#include "Rectangle.hpp"
#include "Circle.hpp"

#include<vector>

class Shapes : public Rectangle , public Circle{
    std::vector<Figure*> figures;

public:
    void add(Figure* figures);
    double sumRectangle()const;;
    double sumCircle() const;

    Figure* operator[](size_t index);

    Shapes() = default;
    ~Shapes();
    Shapes( const Shapes& rhs);
    Shapes& operator=(const Shapes& rhs);
};
