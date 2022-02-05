#include<iostream>

using namespace std;

enum note{ middleC , Csharp , Eflat};
class Instrument{
public:
    void play(note) const{
        cout << "Instrument::play\n";
    }
};

//Wind objects are Instruments because they have the same interface;
class Wind : public Instrument{
public:
    //Redefine interface function:
    void paly(note) const{
        cout << "Wind::play" << endl;
    }
};

void tune(Instrument& i){
    i.play(middleC);
}

int main(){
    Wind flute;
    tune(flute); // Upcasting
return 0;
}
