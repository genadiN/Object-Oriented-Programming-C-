#include<iostream>
#include<string>

int main(){
    std::string hello("Hello world");
    hello.append(" and Kenob");
    hello.push_back('!');

    std:: cout << hello << '\n';
    std::string hello2 = hello;
    hello.clear();

    size_t postion = hello.find("world");
    std::string::npos; // 1844674407370

    std::cout << hello2;
    hello2 += "!!!" ;

    if ( hello == hello2){
        std::cout << "The two strings are equal";
    }
 }
