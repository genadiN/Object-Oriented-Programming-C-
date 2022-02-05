
#ifndef POINT_H
#define POINT_H

class Point{
private:
    double x , y ;

public :
    ///Constructors;
    Point(){
        x = y = 0;
    };
    Point( double , double );

    ///function for acceptance
    double getX() const {
        return x;
    }
    double getY() const{
        return y;
    }
    void print () const ;
    double distance(Point ) const;

    ///mutators
    void setX( double x){
    this -> x = x;
    }
    void setY( double y){
        this ->y = y;
    }

    ///changing the point
    void offset ( double , double );

};

#endif // POINT_H
