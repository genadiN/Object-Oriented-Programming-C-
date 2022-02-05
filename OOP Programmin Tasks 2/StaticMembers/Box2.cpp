#include<iostream>

using namespace std;

class Box{
public:
    ///Constructor definition
    Box ( double l = 2.0 , double b = 2.0 , double h = 2.0){
        cout << " Constructor called. " << endl;
        length = l;
        breadth = b;
        height = h;

        /// Increase every time object is created
        objectCount++;
    }

    double Volume() {
        return length * breadth * height;
    }
    static int getCount() {
        return objectCount;
    }

private:
    double length; /// length of a box
    double breadth; /// breadth of a box
    double height; /// height of a box

    static int objectCount;

};

///Initialize static member of class Box
int Box::objectCount = 0;

 int main( ){
    ///Print total number of objects before creating object
    cout << " Initial Stage count : " << Box::getCount() << endl;
    Box Box1 ( 3.3 , 1.5 , 1.5); // Declare box1
    Box Box2( 8.5, 6.0 , 2.0); // Declare box2

    cout << " Final stage count : " << Box::getCount() << endl;

return 0;
}
