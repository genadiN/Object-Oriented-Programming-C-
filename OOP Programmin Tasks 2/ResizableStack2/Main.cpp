#include<iostream>
#include "Stack.h"

using namespace std;

int main(){

    Stack st;
    for ( int i = 0 ; i < 1000 ; i++){
        st.push(i);
    }
    Stack st1 = st;
    Stack st2;
    st2 = st1;
    while ( !st2.empty()){
        cout << st2.pop() << ' ';
    }
    cout << endl;

return 0;
}
