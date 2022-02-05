#include<iostream>

using namespace std;

class Base{
public:
    virtual void pub(){
        cout <<"pub()\n";

    }
    void usual(){
        cout <<"usual\n";
        pub();
        pri();
        pro();
    }
private:
    virtual void pri(){
        cout << "pri()\n";
    }
protected:
    virtual void pro(){
        cout << "pro()\n";
    }
};

class Der : public Base{
protected:
    virtual void pub(){
        cout << "Derived class\n";
        Base::pub();
        Base::pro();
    }
public:
    virtual void pri(){
        cout << "Derived-pri()\n";
    }
    virtual void pro(){
        cout << "derived-pro()\n";
    }
};

int main(){

    Base *p = new Base;
    Base *q = new Der;
    p->pub();
    q->pub();
    /// p->pri(); unsuccessful because pri() is private in Base
    /// q->pri(); unsuccessful because pri() is private in Base
    Der *r = new Der;
    r->pri();
    ///q->pro(); unsuccessful because pro() is protected in Base
    ///r->pub(); unsuccessful because pro() is protected in Der
    p->usual(); /// accepted because is public in Base
return 0;
}
