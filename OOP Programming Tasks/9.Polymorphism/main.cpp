#include<vector>
#include <iostream>


class Assignment{
public:
    std::vector<int> point;
    virtual int getPoints()const = 0;

    virtual ~Assignment() = 0;
};

Assignment::~Assignment(){
    //delete dynamic memory
}

class Homework1: public Assignment{
    int task1;
public:
    Homework1( int points){
        task1 = points;
    }

    int getPoints() const{
        return task1;
    }
};

class Homework2 : public Assignment{
public:
    std::vector<int> points;
    Homework2( int task1Points , int task2Points){
        points.push_back(task1Points);
        points.push_back(task2Points);
    }

    int getPoints() const{
        int total = 0;
        for ( auto x : points){
            total += x;
        }
        return total;
    }
};
int main(){
    Assignment *hw1 = new Homework1(1);
    Assignment *hw2 = new Homework2(4, 2 );
    std::cout << hw1->getPoints() << "\n";
    std::cout << hw2->getPoints() << "\n";

    std::vector<Assignment*> assignment;
    assignment.push_back(hw1);
    assignment.push_back(hw2);
    for( auto ptr : assignment ){
        std::cout << ptr ->getPoints() << "\n";
    }

    for ( auto ptr : assignment ){
        delete[] ptr;
    }
// * for Assignment type
// * for pointer
//  Assignment **assin = new Assignment*[10];
//   assin[0] = hw1;
//   assin[1] = hw2;
//   delete[] assin;
}
