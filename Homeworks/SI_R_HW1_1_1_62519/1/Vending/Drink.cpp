#include "Drink.hpp"
#include<iostream>
#include<cstring>

using namespace std;

//Default constructor
Drink::Drink(){
    init_name = nullptr;
    icalories = 0;
    iquantity = 0.0;
    iprice = 0.0;
}

// Constructor with parametres
Drink::Drink( const char *init_name , const int init_calories, const double& init_quantity , const double& init_price){
    set_name( init_name );
    icalories = init_calories;
    iquantity = init_quantity;
    iprice = init_price;

}

//Copy constructor;
Drink::Drink( const Drink& Copy):iquantity(Copy.iquantity) , icalories(Copy.icalories) , iprice(Copy.iprice){
    init_name = new char [ strlen( init_name ) + 1];
    strcpy( init_name , Copy.init_name);

}

// implementation of operator=
Drink& Drink::operator=( const Drink& rhs){
    if(this != &rhs){
        delete []init_name ;
        init_name = new char [ strlen( init_name) + 1];
        iquantity = rhs.iquantity;
        icalories= rhs.icalories;
        iprice = rhs.iprice;
    }
    return *this;
}

//Destructor
Drink::~Drink(){
    delete []init_name;
}

//Getter for name
const char* Drink::get_name() const{
    return this ->init_name;
}

//Getter for calories
int Drink::get_calories() const {
    return icalories;
}

//Getter for quantity
double Drink::get_quantity() const{
    return iquantity;
}

//Getter for price
double Drink::get_price() const{
    return iprice;
}

//Function for setting the dynamic memory
void Drink::set_name( const char* name){
   delete []this -> init_name;
   int Size = strlen( init_name ) + 1;
   this -> init_name = new char [Size];
   strcpy( this -> init_name , name);
}

//Function for inputing the elements
void Drink::read( int Size){

    for ( int i = 0 ; i < Size ; i++){
        cout << i << endl;
        static char s[100];
        cout << " Name: ";
        cin >> s;
        init_name = new char [strlen(s) + 1];
        strcpy( init_name , s);
        cout << " Quantity: ";
        cin >> iquantity;
        cout << " Calories: ";
        cin >> icalories;
        cout << " Price: ";
        cin >> iprice;
        delete [] init_name;
    }

}


