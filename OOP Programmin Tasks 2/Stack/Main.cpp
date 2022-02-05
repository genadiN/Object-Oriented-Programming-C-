#include<iostream>
#include "Stack.h"

using namespace std;

int main(){
    /// Reading integer affirmative number ;
    cout << " Number = ";
    int n ;
    cin >> n ;

    Stack st;
    int x = n;
    while ( x ){
        st.push(x % 2);
        x /= 2;
    }

    /// printing binary number;
    while ( !st.empty() ){
        cout << st.pop();
    }
    cout << endl;


return 0;
}
