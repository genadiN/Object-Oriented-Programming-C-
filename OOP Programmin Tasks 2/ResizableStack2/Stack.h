#ifndef STACK_H
#define STACK_H

int const MAX = 100;

class Stack{
private:
    int *arr; // dynamic array with elements of stack
    int top; // index of last element
    int size;

    /// check whether stack is full
    bool full() const;
    void grow();

public:
    /// constructor
    Stack();
    /// constructor for copy
    Stack( Stack const&);

    /// Destructor
    ~Stack();

    /// operator=
    Stack& operator=( Stack const &);

    /// function for acceptance
    /// checking whether stack is empty
    bool empty() const;

    /// finding elements on top of stack
    int peek() const;

    /// mutators

    /// including elements
    void push( int );

    /// exclusion element
    int pop();

};


#endif // STACK_H
