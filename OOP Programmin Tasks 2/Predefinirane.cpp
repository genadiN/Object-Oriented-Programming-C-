
#include<iostream>

using namespace std;

class Base{
public:
    void init(int x){
        bx = x;
    }
    void display() const {
        cout << " class Base: bx= " << endl;
    }
protected:
    int bx;

};

class Der : public Base
{
public:
    void init ( int x) {
        bx = x;
        Base :: bx = x + 5;
    }
    void display() const {
        cout << " class Der : bx = "<< bx;
        cout << " Base::bx = " << Base::bx << endl;
    }
protected:
    int bx;

};

int main(){
    Base b;
    Der d;
    b.init( 5 ) ; d.init( 10 );
    b.display() ; d.display();
    d.Base :: init( 20 );
    d.Base::display();
    d.display();
    b.display();

return 0;
}
