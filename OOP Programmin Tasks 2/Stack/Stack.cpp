#include "Stack.h"

#include<iostream>

using namespace std;

Stack::Stack() {
    top = -1 ; // Empty Stack
}

bool Stack::empty() const{
    return top == -1 ;
}

int Stack::peek() const {
    if ( empty() ){
        cout << " Error , you try to see in empty stack ! \n";
        return 0;
    }
    return arr[top];

}

void Stack::push( int x){
    if ( full() ){
        cout << " Error , you want to include in full stac! \n";
    }
    else{
        arr[++top] = x;
    }
}

bool Stack::full()const{
    return top == MAX - 1;
}

int Stack::pop(){
    if ( empty()){
        cout << " Error: attempt for including in empty stack \n";
        return 0;
    }
    return arr[top--];

}

