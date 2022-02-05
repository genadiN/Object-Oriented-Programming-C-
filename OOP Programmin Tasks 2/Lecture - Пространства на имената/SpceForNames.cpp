#include<iostream>

using namespace std;

namespace first {
    int val = 500;
}
// Global variable
int val = 100;

int main(){
    int val = 200;
    cout << val << endl; // Local variable
    cout << first :: val << endl ;// Global variable in first
    cout << ::val << endl; // Global variable

return 0;
}
