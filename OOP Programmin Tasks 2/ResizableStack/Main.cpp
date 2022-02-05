#include<iostream>
#include "Stack.h"

using namespace std;

int main(){
    Stack st;
    for ( int i = 0 ; i < 100 ; i++){
        st.push(i);
    }
    //
    while (!st.empty()){
        cout << st.pop() << "   ";
    }
    cout << endl;

return 0;
}
