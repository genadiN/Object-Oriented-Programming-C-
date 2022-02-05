#include<iostream>

using namespace std;

class Base {
private:
    int a1;
protected:
    int a2;
public:
    Base(){
        cout << " constructor Base() " << endl;
        a1 = 0;
        a2 = 0;
    }
    Base ( int x , int y ){
        cout << " contructor Base( " << x << ", " << y << ")" << endl;
        a1 = x;
        a2 = y;
    }
    void a3(){
        cout << "a1: " << a1 << endl;
        cout << "a2: " << a2 << endl;
    }

};

class Der : public Base
{
private:
    Base d1;
protected:
    Base d2;
public:
    Der ( int x , int y) : Base ( x , y){
        cout << "constructor Der" << endl;
    }
    void d3(){
        d1.a3();
        d2.a3();
        cout << "a2: " << a2 << endl;
        cout << "a3(): " << endl;

        a3();
    }
};

int main(){
    Der x( 1 , 2);
    x.d3();
}
