#ifndef LINKEDSTACK_H
#define LINKEDSTACK_H

struct StackElement{
    int data;
    StackElement* next;
};

class LinkedStack{
private:
    StackElement* top;
    void copyStack(LinkedStack const&);
    void deleteStack();

public:
    /// Create empty stack
    LinkedStack();
    /// constructor fro copy
    LinkedStack( LinkedStack const& );
    ~LinkedStack();

    /// operator =
    LinkedStack& operator=( LinkedStack const &s);

    /// selectors
    /// checking whether stack is empty
    bool empty () const;

    /// finding elements on the top of the stack
    int peek() const;

    // mutators
    /// including elements
    void push (int );

    /// excluding element
    int pop();

};

#endif // LINKEDSTACK_H
