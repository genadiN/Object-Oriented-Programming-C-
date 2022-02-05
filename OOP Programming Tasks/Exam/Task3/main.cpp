#include "NamedObjectArray.hpp"

int main(){
     double obj = 42;
    NamedObject<double> test("testche", 12,obj);
    std::cout<<test.get_Name() << "\n";
    std::cout<<test.get_Id() << "\n";
    std::cout<<test.get_Object() << "\n";

    double hah = 5;
    NamedObject<double> test1("opii" ,10,hah);

    NamedObjectArray<double> arr;
    arr.add(test);
    std::cout << "here\n";
    arr.add(test1);

    std::cout << arr[0].get_Id();
}
