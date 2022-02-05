#pragma once

class EventDate{
    int month;
    int day;
    int hours;
    int minutes;

public:
    const char* getMonth() const;
    void setMonth( int month );

    EventDate( int month = 5){
        this-> month = month;
        day = 0;
        hours = 0;
        minutes = 0;
    }

    EventDate& operator++(int ){// postfix
        EventDate copy( *this);
        day++;
        return copy;
    }

    void operator+=( int days){
        this-> day += days;
    }
    // if this < rhs
    bool operator< ( EventDate& rhs){
        return this-> month < rhs.month;
                (this -> month = rhs.month && this->day < rhs.day);
    }

    bool operator> ( EventDate& rhs){
        // this > rhs
        // rhs < this
        return rhs < *this;
    }

};

bool operator> ( EventDate& lhs , EventDate& rhs){
    return rhs < lhs;
}

class Event{
public:
    EventDate date;
private:
    char* name; // No way to use this, but we will fix that soon
};


