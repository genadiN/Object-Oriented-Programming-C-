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
public:
    int task1;
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
    Assignment *hw2 = new Homework2(4, 65);
    std::vector<Assignment*> assignment;
    assignment.push_back(hw1);
    assignment.push_back(hw2);
    for( auto ptr : assignment ){
        std::cout << ptr ->getPoints() << "\n";
    }
// do the casting no matter what is in the brackets;
    std::cout << static_cast <int>(56.784);
// const_cast: use if work with code from another person

// dynamic_cast : cast form one poiinter to another
// with some check if the cast is completed correctly
    for ( auto ptr : assignment){
        Homework1* hw1Maybe = dynamic_cast<Homework1*>(ptr);
       if ( hw1Maybe){
            hw1Maybe->task1 += 1;
        }else {
            std::cout << "nothing to do, it is not a hw1 \n";
       }
    }

    for ( auto ptr : assignment){
        std::cout << ptr->getPoints() << "\n";
    }

    for ( auto ptr : assignment ){
        delete ptr;
    }


}
