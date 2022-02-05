#ifndef PERSON_H
#define PERSON_H

class Person {
public:
    void readPerson( char * , char * );
    void printPerson() const;
private:
    char * name;
    char * egn;
};

#endif // PERSON_H
