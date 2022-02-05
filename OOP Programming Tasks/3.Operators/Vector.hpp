#pragma once

class Vector{
    int* data;
    int capacity;
    int count;
    static int counter_calls;
public:
    Vector( int capacity );
    Vector( const Vector& rhs);
    ~Vector();
    Vector& operator=( const Vector& rhs);

    int operator[] ( int index);
    void push_back(int x);

    static Vector createVector();
};
