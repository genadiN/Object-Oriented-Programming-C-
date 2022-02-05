#include "LinkedStack.h"

#include<iostream>

using namespace std;

LinkedStack::LinkedStack(){
    top = NULL;
}

LinkedStack::~LinkedStack()
{
    cout << " Destructor " << endl;
    StackElement *toDelete;
    while ( top != NULL){
        toDelete = top;
        top = top -> next;
        delete toDelete;
    }
}

bool LinkedStack::empty() const {
    return top == NULL;
}

int LinkedStack::peek() const {
    if ( empty()){
        cout << " error : attempt to see in empty stack! \n";
        return 0;
    }
    return top->data;

}

void LinkedStack::push( int x){
    StackElement* p = new StackElement;
    p-> data = x;
    p -> next = top;
    top = p;
}

int LinkedStack::pop(){
    if(empty()){
        cout << " Error : you want to see in empty stack! \n";
        return 0;
    }
    // top != NULL;

    StackElement* p = top;
    top = top -> next;
    int x = p -> data;
    delete p ;
    return x;
}
