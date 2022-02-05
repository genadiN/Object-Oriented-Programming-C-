#include<iostream>

using namespace std;

class Base {
public:
    Base( int x = 0){
        b = x;
    }
    Base& operator=( const Base &x){
        if( this != &x){
            b = x.b + 1;
        }
        return *this;
    }
protected:
    int b;
};

class Der1 : public Base{
public:
    Der1( int x = 1){
        d = x;
    }
    Der1& operator=( const Der1 &x){
        if ( this != &x){
            d = x.d + 2;
            b = x.b + 3;
        }
        return *this;
    }
    void print(){
        cout << "Der1: " << d << " Base: " << b << endl;
    }
private:
    int d;
};

class Der2 : public Base{
public:
    Der2( int x = 2){
        d = x;
    }
    Der2& operator=( const Der2& x){
        if ( this != &x){
            d = x.d + 3;
        }
        return *this;
    }
    void print(){
        cout << "Der2: " << d << " Base: " << b << endl;
    }
private: int d;
};

class Der3 : public Base{
public:
    Der3(int x = 3){
        d = x;
    }
    void print(){
        cout << "Der: " << d << " Base: " << b << endl;
    }
private:
    int d;
};

int main(){
    Der1 d11(5) , d12;
    Der2 d21(5) , d22;
    Der3 d31(5) , d32;
    d12 = d11;
    d22 = d21;
    d32 = d31;
    cout << "d11: " ; d11.print();
    cout << "d12: " ; d12.print();
    cout << "d21: " ; d21.print();
    cout << "d22: " ; d22.print();
    cout << "d31: " ; d31.print();
    cout << "d32: " ; d32.print();
return 0;
}
