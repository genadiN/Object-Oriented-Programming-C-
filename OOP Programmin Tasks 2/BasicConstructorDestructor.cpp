#include<iostream>

using namespace std;

class Base{
private:
    int a1;
protected:
    int a2;
public:
    Base(){
    a1 = 0;
    a2 = 0;
    }
    Base ( int x ){
        a1 = x;
        a2 = 0;
    }
    Base ( int x , int y){
    a1 = x;
    a2 = y;
    }
    void a3(){
        cout << " a1 = " << a1 << endl;
        cout << " a2 = " << a2 << endl;
    }

};

class Der : public Base{
private:
    int d1;
protected:
    int d2;
public:
    Der ( int x , int y , int z , int t) : Base(x , y){
        d1 = z;
        d2 = t;
    }
    void d3(){
        cout << "d1 = " << d1 << endl;
        cout << "d2= " << d2 << endl;
        cout << "a2= " << a2 << endl;
        cout << "a3(): " << endl;
        a3();
    }
};

int main(){
    Der x( 1 , 2 , 3 , 4 );
    x.d3();

return 0;
}


