#include<iostream>
#include<string>

using namespace std;

class EventDate {
    int month;
    int day;
    int hours;
    int minutes;
public:
    int getMonth( ) const{
        return this-> month;
    }

    void addDays(int days){
        this -> day+= days;
        /// == ( *this).day += days;
        /// == day += days;
    }

    void setMonth( int month _){
        if ( month > 12){
            return ;
        }else if ( month < 0){
            return ;
        }
        this -> month = month;
    }

    void changeMonth ( int month ){
        month = month;
    }

    char* getMonth() const{
        if( month == 0){
            return "January";
        }else if ( month == 1){
            return "February";
        }
    }
};



class Event{
private:
     char* name;
public:
    EventDate date;
};

void printDate ( EventDate date){
        cout << date.month << ' ' << date.day << ' '
                << date.hours << ' ' << date.minutes << endl;
}

EventDate createStaticEventDate(){
    EventDate date1;
    // do stuff
    date1.day = 22;
    return date1;
}

EventDate* createDynamicEventDate(){
    EventDate* date1 = new EventDate();
    // do stuff;

    return *date1;

}

int main(){
    // Stack
    Event event1;
    printDate(event1.date);

    // Hype
    Event* event2ptr = new Event;

    EventDate * date1 = createDynamicEventDate() ;
    delete date1;

    // Second part
    Event event3;
    event3.addDays(4); // -> addDays( event3 , 4)

    EventDate date4;
    date4.getMonth();


}


