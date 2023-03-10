#pragma  once
#include <exception>
#include <string>

class Exceptions : public std::exception
{
    std::string _error;
    int _num;
public:
    Exceptions(std::string error); 
    Exceptions(int size);
    virtual const char* what() const noexcept override;     //наследование 
    void show();                                            //без наследования
};