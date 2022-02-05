#include<iostream>

using namespace std;

class Point2{
public:
    Point2(int a = 0 , int b = 0):x(a) , y(b){}
    virtual void print() const{
        cout << x << " , " << y ;
    }
private:
    int x;
    int y;
};

class Point3 : public Point2{
public:
    Point3( int a = 0 , int b = 0 , int c = 0) :Point2( a , b) , z(c){}
    virtual void print() const{
        Point2::print();
        cout <<" , "  << z << endl;
    }
private:
    int z;
};

class ColPoint3 : public Point3{
public:
    ColPoint3(int a = 0, int b = 0 , int c = 0 , int col = 0):
        Point3(a , b , c) , color(col){}
    virtual void print() const{
        Point3::print();
        cout << "color: " << color << endl;
    }
private:
    int color;
};

int main(){
    Point2 p2( 5 , 10);
    Point3 p3( 2 , 4 , 6);
    ColPoint3 p4(12 , 24 , 36 , 11);
    Point2 *ptr1 = &p3;
    ptr1->print();
    cout << endl;
    Point2 *ptr2 = &p4;
    ptr2-> print();
    cout << endl;
return 0;
}
