#include<vector>
#include<iostream>

class String : std::vector<char>{
public:

    void push_back(char c){
        if (!this->empty()){
            pop_back();
        }
        std::vector<char>::push_back(c);
        std::vector<char>::push_back('\0');
    }

    const char* c_str() const{
         return &at(0);
    }
};

template <class T>
class Stack : protected std::vector<T>{
public:
    T pop(){
        T temp = std::vector<T>::at(std::vector<T>::size() - 1);
        std::vector<T>::pop_back();
        return temp;
    }

    void push( const T& element){
        std::vector<T>::push_back(element);
    }
};

int main(){
    const char* hello = "Hello";
    String s;
    s.push_back('s');

    std::cout << s.c_str();
    Stack<int>  stak;
    stak.push(2);
    stak.pop();

}
