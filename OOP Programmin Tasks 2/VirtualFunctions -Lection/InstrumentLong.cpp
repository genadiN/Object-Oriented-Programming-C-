#include<iostream>

using namespace std;
enum note { middleC , Csharp , Cflat};
class Instrument{
public:
    virtual void play(note) const = 0;
    virtual char* what() const = 0;
};

class Wind : public Instrument{
public:
    void play(note) const{
        cout << "Wind::play" << endl;
    }
    char* what() const{ return "Wind" ;}
};

class Percussion: public Instrument{
public:
    void play(note) const{
        cout << "Percussion::play" << endl;
    }
    char* what() const{ return "Percussion\n";}
};

class Stringed : public Instrument{
public:
    void play(note) const{
        cout << "Stringed::play" << endl;
    }
    char* what() const{return "Stringed\n";}
};

class Brass : public Wind{
public:
    void play(note) const{
        cout <<"Brass::play" << endl;
    }
    char* what() const{
    return "Brass";}
};

class Woodwind : public Wind{
    void play(note) const{
        cout << "WoodWind::lay\n";
    }
    char* what() const{ return "WoodWind\n";}
};

void tune(Instrument& i){
    i.play(middleC);
}

int main(){

    Instrument* A[] = {new Wind , new Percussion,
    new Stringed , new Brass};
    for ( int i = 0 ; i < 4 ; i++){
        tune(*(A[i] ) ) ;
        cout << A[i]->what();
    }
    for( int i = 0 ; i < 4 ; i++){
        delete A[i];
    }
return 0;
}
