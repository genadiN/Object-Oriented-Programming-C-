#include "Date.h"

#include<iostream>

using namespace std;

int main(){

    Date d;
    d.read();
    d.print();
    cout << endl;
    int days = 1;
    d.change_date(days);
    d.print();
    cout << endl;

return 0;
}
