#include<iostream>
#include<vector>

template<class T>
T max( T a , T b){
    if ( a > b ){
        return a;
    }
    return b;
}

template <class U = int , class T>
U max( U a , U b ){
    if ( a > b ){
        return a;
    }
    return b;
}

int main(){
    std::vector<int> v;
    v.push_back(5);
    v.push_back(2);
    v.push_back(7);
    v.push_back(1);

    if ( v.empty()){
        std::cout << "No max\n";
    }else {
        int max_el = -1;
        for (auto x : v){
            if (x > max_el){
               max_el = max<int>( max_el , x );
            }
        }
        std::cout<< "Max element is : " << max_el << '\n';
     }

    std::vector<double> v2;
    v2.push_back(5.2);
    v2.push_back(2.5);
    v2.push_back(7.8);
    v2.push_back(1.6);

    if ( v2.empty()){
        std::cout << "No max\n";
    }else {
        double max_el = -1;
        for (auto x : v2){
            if (x > max_el){
              max_el = max<double>( max_el , x );
            }
        }
        std::cout<< "Max element is : " << max_el << '\n';
     }

}
