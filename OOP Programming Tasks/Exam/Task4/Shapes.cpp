#include "Shape.hpp"


void Shapes::add(Figure* figure){
    figures.push_back(figure -> clone());
}

double Shapes::sumRectangle()const{
    double sum = 0;
    for (auto x : figures){
        auto recPtr = dynamic_cast<Rectangle*> ( figures[x]);
        if(recPtr){
            sum += recPtr->calculateArea();
        }
    }
    return sum;
}

double Shapes::sumCircle() const{
    double sum = 0;
    for (auto x : figures ){
        auto cirPtr = dynamic_cast<Circle*>(figures[x]);
        if (cirPtr){
            sum += cirPtr -> calculateArea();
        }
    }
    return sum;
}

Figure* Shapes::operator[](size_t index){
    if(index < figures.size() && index > 0){
        return figures[index];
    }
    return nullptr;
}

Shapes::~Shapes(){
    for( auto x : figures){
        delete x;
    }
    figures.clear();
}

Shapes::Shapes( const Shapes& rhs){
    for (auto x : rhs.figures){
        figures.push_back(x->clone());
    }
}

Shapes& Shapes::operator=(const Shapes& rhs){
    if (this != rhs){
        for( auto x : figures){
            delete x;
        }
        for ( auto x : rhs.figures){
            figures.push_back(x->clone());
        }
    }
    return *this;
}
