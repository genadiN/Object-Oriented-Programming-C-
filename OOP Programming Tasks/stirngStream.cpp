#include<sstream>
#include<iostream>

int main(){
    std::stringstream ss;
    ss << "hello ";
    ss << 123;
    ss << "there";

    std::cout << ss.str();

}

