#ifndef STACK_H
#define STACK_H

int const MAX = 100;

class Stack {
private :
    int arr[MAX]; /// array with elements form the stack
    int top; /// index of last element

    /// checking whether stack is full
    bool full () const ;

public:

    /// create empty stack
    Stack();

    /// Function for acceptance
    /// Checking whether stack is empty
    bool empty() const ;

    /// finding top element;
    int peek() const ;

    ///mutators
    /// including element
    void push( int );

    /// exclusion of element
    int pop();

};

#endif // STACK_H
