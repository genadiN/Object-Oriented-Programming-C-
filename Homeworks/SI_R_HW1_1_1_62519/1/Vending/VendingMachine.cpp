#include "VendingMachine.hpp"
#include "Drink.hpp"

#include<iostream>
#include<cstring>

using namespace std;


//default constructor
VendingMachine::VendingMachine(){
    dr = nullptr;
    capacity = 100;
    counting = 0;
    income = 0;
}

//Copy constructor
VendingMachine::VendingMachine(const VendingMachine& from){
    income = from.income;
    capacity = from.capacity;
    counting = from.counting;
    dr = new Drink[capacity];
    for ( int i = 0 ; i < counting ; i++ ){
        dr[i] = from.dr[i];
    }
}
//Operator=
VendingMachine &VendingMachine::operator=( const VendingMachine &from ){
    if ( this != &from){
            delete [] dr;
           dr = new Drink[capacity];
            for ( int i = 0 ; i < counting ; i++){
                dr[i] = from.dr[i];
            }
            capacity = from.capacity;
            income = from.income;
            counting = from.counting;
    }
    return *this;
}

//Destructor
VendingMachine::~VendingMachine(){
    delete []dr;
}

//Function add_drink
bool VendingMachine::add_drink(const Drink& to_add ){
    int equals = 0;
//Loop for scanning
    for ( int i = 0 ; i < counting ; i++){
//Checking if names are equal
       if ( strcmp( dr[i].get_name() , to_add.get_name()) == 0)
        equals++;
    }
// Returning the answer;
    if ( equals > 0)return false;
    return true;
}

//Function 2 : buy_drink
int VendingMachine::buy_drink( const char* drink_name , const double money){
    int answer;
//Loop for scanning
    for( int i = 0 ; i < counting ; i++){
// Case 1;
        if ( strcmp( drink_name , dr[i].get_name()) == 0 && money >= dr[i].get_price()){
            delete []dr;
            income += money;
           return 0;
        }
//Case 2;
        if ( money < dr[i].get_price() && strcmp( drink_name ,dr[i].get_name() ) == 0 ){
            income += money;
            return 1;
        }
//Case 3;
        if (strcmp( dr[i].get_name() , drink_name) != 0){
            answer++;
        }
    }
    if ( answer == counting)return 2;
}
//Function 3 : get_income
double VendingMachine::get_income()const {
   return income;
}

