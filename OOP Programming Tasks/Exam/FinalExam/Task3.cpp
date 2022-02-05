#include<iostream>
#include<cstring>

class Car{
public:
    Car(): model("") , horsepower(0){}

    void getmodel() const{
        std::cout << this-> model;
    }

    void* setmodel(const char* model) const{
        delete[] this-> model;
        this-> model = new char[strlen(model) + 1];
        strcpy(this-> model , model);
    }

    ~Car(){
    delete[] this->model;
    //delete this-> horsepower;
    }

    char* model;
    unsigned horsepower;

};

int main(){

    Car c;
}
