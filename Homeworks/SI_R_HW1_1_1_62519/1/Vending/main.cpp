#include "VendingMachine.hpp"
#include "Drink.hpp"

#include<iostream>
#include<iomanip>

using namespace std;

void print ( Drink t){
    cout << "\t Name\tQuantity\tCalories\tPrice \n";
    cout << "\t" << t.get_name() ;
    cout << "\t" << t.get_quantity() ;
    cout << "\t\t" << t.get_calories();
    cout << "\t""\t" << t.get_price() << "\n";

}

int main(){

Drink drink("Apple" , 5 , 25 , 78 );
print(drink);
int n = 2;
drink.read(n);

return 0;
}
