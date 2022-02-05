#include<iostream>
#include "LinkedStack.h"

using namespace std;

int main(){

    /// Reading affirmative number
    cout << " Number = ";
    int n ;
    cin >> n ;

    LinkedStack *st = new LinkedStack;

    int x = n;
    while ( x ){
        st ->push ( x % 2) ;
        x /= 2;
    }

    /// printing binary number ;
    while ( !st-> empty()){
        cout << st->pop();
    }
    cout << endl;
    delete st;


return 0;
}
