
#ifndef LINKEDSTACK_H
#define LINKEDSTACK_H

struct StackElement{
    int data ;
    StackElement* next;
};

class LinkedStack{
private:
    StackElement* top;

public:
    ///Create empty stack
    LinkedStack();
    ~LinkedStack();

    //selectors
    ///Checking whether stack is empty
    bool empty() const;

    /// Finding the element on top position
    int peek() const;

    // mutators
    ///Including element
    void push ( int );

    ///Exclusion element
    int pop();

};

#endif // LINKEDSTACK_H
