#include<iostream>
#include<string>
#include<fstream>

struct StudentScore{
    int fn;
    int task1Points;
    int task2Points;
    std::string name;

    friend std::istream& operator>>(std::istream& in , StudentScore& s);
   friend std::ostream& operator<<(std::ostream& out , StudentScore& s);
};

std::istream& operator>>(std::istream& in , StudentScore& s){
    char trash;

    in >> s.fn;
    in >> trash;
    in >> s.task1Points;
    in >> trash;
    in >> s.task2Points;
    in >> trash;
    in >> s.name;

    return in;
}

std::ostream& operator<<(std::ostream& out , const StudentScore& s){
    out << s.fn << ", " << s.task1Points << ","
        << s.task2Points << ", " << s.name;
    return out;
}
int main(){
    StudentScore s;
    std::ifstream inFile("scores.csv");
    std::ofstream outFile("fns" );
    if ( inFile.is_open() && outFile.is_open()){
        while( inFile >> s){
                outFile << s.fn << "\n";
        };
    }
    std::fstream ioFile("io" , std::ios::app |
                std::ios::binary | std::ios::out | std::ios::in);
    ioFile.seekp() , std::ios::cur); // read
    ioFile.seekg() , std::ios::end); // write

    inFile.close();
    outFile.close();
}


