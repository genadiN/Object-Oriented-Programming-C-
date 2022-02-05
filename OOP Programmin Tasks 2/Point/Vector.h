#ifndef VECTOR_H
#define VECTOR_H
#include "Point.h"

class Vector{
private:
    Point Start;
    Point End;

public:
    /// constructors
    Vector ( Point , Point) ;

    /// function for acceptance
    Point getStart() const{
        return Start;
    }
    Point getEnd() const {
        return End;
    }
    void print() const;
    double length() const;

    /// mutators
    void setStart(Point a){
        Start = a;
    }
    void setEnd ( Point b ){
        End = b;
    }
    void offset( double , double );
};

#endif // VECTOR_H
