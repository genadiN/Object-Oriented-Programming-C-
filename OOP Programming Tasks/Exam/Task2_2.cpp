
#include<iostream>
#include<vector>

class Foo{
public:
    Foo(const int& init_val = 0):val(init_val){}
    int val;
};

int main(){
    std::vector<Foo*> items;
    Foo a(3);

    items.push_back(&a);
    {
        Foo b(5);
        items.push_back(&b);
    }

    for(Foo* item : items){
        std::cout << item -> val << " ";
    }
}

// we have vector container which have Foo* items
// the nwe don't delete the dynamic memory
//
