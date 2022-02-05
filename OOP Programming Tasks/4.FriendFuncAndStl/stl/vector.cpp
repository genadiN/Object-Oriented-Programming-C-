#include<iostream>
#include<vector>
#include<string>

int main(){
   // int* ints = new int[10]; same
   // int ints[10]; same
   //std::vector<std::vector<int>> ints;
   //[ a11  a12 V V ]
   //[ a21 a22. ...]
   //[ a31 a32 ... ]
   std::vector<int> ints;
   ints.push_back(1); //[1];
   ints.push_back(2); //[1 , 2]
   for ( int i = 0 ; i < 100 ; i++){
        ints.push_back(i);
   }

   for (size_t i = 0 ; i < ints.size(); i++){
        std::cout << ints[i] << " ";
   }

   for ( std::vector<int>::iterator it = ints.begin() ; it != ints.end() ; it++){
        std::cout << *it << " ";
   }

   for ( auto it = ints.begin() ; it != ints.end() ; it++){
        std::cout << *it << " ";
   }

   for ( auto x : ints){
        std::cout << x << " ";
   }

    int index5Val = ints.at(5);
    ints.pop_back(); // remove the last element
    ints.size(); // 100
    if ( ints.empty()){
         std::cout << " Vec is empty " ;
    }

    std::vector<int>::iterator index5 = ints.begin() + 5;
    *index5 = 42;
    ints.insert(index5 , 7); // indesrt number 7 on position index5
    ints.erase(index5); // erase position index5

    ints.clear(); // size = 0; , clearing vector

 }

