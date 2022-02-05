
#pragma once
#ifndef DATE_H
#define DATE_H

class Date{
private:
    int date;
    int month;
    int year;
public:
    Date();
    Date ( int , int , int );
    int getDate() const;
    int getMonth() const;
    int getYear() const;
    void print() const;
    void read();
    int change_date(int );

};

#endif // DATE_H
