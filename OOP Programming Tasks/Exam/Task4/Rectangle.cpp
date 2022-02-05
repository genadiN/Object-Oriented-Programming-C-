#include "Rectangle.hpp"

Rectangle::Rectangle(double length , double width , st::string color)
:length(length) , width(width) , color(color){}

double Rectangle:: get_Length()const{
    return length;
}

double Rectangle::get_width() const{
    return width;
}

double Rectangle::calculateArea(){
    return length * width;
}

Figure* Rectangle::clone() const{
    return new Rectangle(*this);
}
