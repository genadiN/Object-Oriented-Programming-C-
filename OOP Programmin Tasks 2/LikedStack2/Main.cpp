#include<iostream>

#include "LinkedStack.h"

using namespace std;

int main(){
    LinkedStack st;
    for ( int i = 0 ; i < 1000 ; i++){
        st.push(i);
    }
    LinkedStack st1 = st;
    LinkedStack st2 ;
    st2 = st1;
    while ( !st2.empty() ){
        cout << st2.pop() << ' ';
    }
    cout << endl;

    return 0;
}
