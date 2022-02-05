// A c++ program to demonstrate use of class in a namespace
#include<iostream>

using namespace std;

namespace ns{
    // A class in a namespace
class geek{
public:
    void display();
    };
}

void ns::geek::display(){
    cout << " ns::geek::display\n";
}

int main(){
    // creating Object of geek Class
    ns::geek obj;
    obj.display();


return 0;
}
