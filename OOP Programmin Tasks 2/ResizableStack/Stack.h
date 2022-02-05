#ifndef STACK_H
#define STACK_H

int const MAX = 100;

class Stack{
private:
    int *arr; /// dynamic array with elements of the stack
    int top; /// index of last element
    int size;

    /// checking whether it is full
    bool full() const ;

    void grow();

public:
    ///creating empty Stack
    Stack() ;
    ///Destructor;
    ~Stack();

    //function for acceptance
    /// Checking whether stack is empty
    bool empty() const;

    /// Finding element on top poisition
    int peek() const;

    // mutators

    ///including the element
    void push( int );

    /// exclusion of element
    int pop();
};

#endif // STACK_H
