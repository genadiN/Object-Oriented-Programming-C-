#include<iostream>

#include "FloatNumber.hpp"

using namespace std;

int main(){
    FloatNumber a;
    a.set_Float_Number(5.5);
    FloatNumber b;
    b.set_Float_Number(5.6);
    if ( a > b ){
        cout << "yes" << endl;
    }else {
        cout << " no " << endl;
    }
}


