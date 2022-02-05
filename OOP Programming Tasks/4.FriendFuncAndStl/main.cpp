#include<iostream>
#include<vector>

class Car {
    int x = 0;
    int y = 0;
public:
     friend void moveOnce(Car& car){
        car.x += 1;
     }
     friend class Driver;
};

class Driver{
    Car car;
public:
    void driveCar(){
        moveOnce(car);
    }
};


int main(){
    Car car;
    moveOnce( car );

    Driver driver;
    driver.driveCar();
}
