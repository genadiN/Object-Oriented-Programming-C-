class A {
public:
    int x = 42;
    char* str = new char[20];

    A(){
    this->str = new char[20];
    }

    ~A(){
        delete[] this->str;
    }
};

void foo( A& aPtr){
    aPtr.x;
}

int main(){
    A a; // <-
    foo(a);
}
