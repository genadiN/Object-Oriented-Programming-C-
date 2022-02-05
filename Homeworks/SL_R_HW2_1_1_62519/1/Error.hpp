#pragma once
#include<cstring>

class Error{
public:
    Error(const std::string& message = "");
    std::string get_message() const;
private:
   std::string error ;

};
