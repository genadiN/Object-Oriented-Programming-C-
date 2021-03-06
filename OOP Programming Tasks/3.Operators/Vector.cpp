#include "Vector.hpp"

#include <iostream>

void Vector::push_back(int x) {
    static int push_back_counter = 0;  // called only ONCE in the whole program
    push_back_counter += 1;            // called every time the method is called

    if (count < capacity) {
        data[count] = x;
        count += 1;
    } else {
        int* newData = new int[capacity * 2];
        for (size_t i = 0; i < count; i++) {
            newData[i] = data[i];
        }

        delete[] data;
        data = newData;
        capacity *= 2;

        data[count] = x;
        count += 1;
    }
}

Vector::Vector(int _capacity) : capacity(_capacity) {
    constructor_calls += 1;
    std::cout << "Vectors created: " << constructor_calls << "\n";

    data = new int[capacity];
}

Vector::Vector(const Vector& rhs) {  // rhs = right hand side (naming convetion)
    std::cout << "Copy constructor\n";
    this->capacity = rhs.capacity;
    this->count = rhs.count;

    this->data = new int[this->capacity];
    for (size_t i = 0; i < this->count; i++) {
        this->data[i] = rhs.data[i];
    }
}

Vector& Vector::operator=(const Vector& rhs) {  // rhs = right hand side (naming convetion)
    std::cout << "operator=\n";

    if (this != &rhs) {
        delete[] this->data; // delete y.data

        this->capacity = rhs.capacity;
        this->count = rhs.count;

        this->data = new int[this->capacity]; // y.data = new
        for (size_t i = 0; i < this->count; i++) {
            this->data[i] = rhs.data[i]; // y.data[i] = y.data[i]
        }
    }

    return *this;
}

Vector::~Vector() {
    delete[] data;
}

Vector Vector::createVector() {  // can be used instead of constructor
    return Vector();
}

int Vector::operator[](int index){
    if ( index >= count){
        return 0;
    }
    return this->data[index];
}

int Vector::constructor_calls = 0; // Initialize static class variable
