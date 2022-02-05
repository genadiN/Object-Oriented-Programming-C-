#include<iostream>

using namespace std;

class ZooAnimal{
public:
    void print() const{
        cout <<"ZooAnimal\n";
        spec();
    }
    virtual void spec()const{
        cout <<"Address:\n"
            <<"Sofia , Bulgaria\n";
    }
private:

};

class Cat : public ZooAnimal{
public:
    virtual void spec() const{
        cout << "Cat\n";
    }
};

class Mouse : public ZooAnimal{
public:
    virtual void spec()const{
        cout << "Mouse\n";
    }
};

class Bear : public ZooAnimal{
public:
    virtual void spec() const{
        cout << "Bera\n";
    }
};

int main(){
    ZooAnimal zoo , *pzoo;
    Cat c;
    Mouse m;
    Bear b;
    pzoo = &zoo; pzoo->print();
    pzoo = &c; pzoo->print();
    pzoo = &m; pzoo->print();
    pzoo = &b; pzoo->print();

    /*
     ZooAnimal *pz;
     Bear b ; Cat c ; Mouse m ;
     pz = &b ; pz->spec(); - dynamic connection
     pz = &c; pz->spec(); - dynamic connection
     pz = &m ; pz->spec(); - dynamic connection
     pz->ZooAnimal::spec(); - static connection
    */

return 0;
}
