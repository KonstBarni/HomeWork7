#include <iostream>
#include <string>
#include "ExceptionsArray.h"
#include "ClassIntegerArray.h"
using namespace std;

Exceptions::Exceptions(string error): _error(error)
{
}

Exceptions::Exceptions(int num): _num(num)
{
}

const char* Exceptions::what() const noexcept
    {
        return _error.c_str();
    }

void Exceptions::show()   //реализация исключений без наследования
{
    switch (_num)
    {
        case 0:
            cout << "Размер контейнера 0!" << endl;
            break;
        case 1:
            cout << "Превышен размер контейнера!" << endl;
            break;
        case 2:
            cout << "Контейнер заполнен!" << endl;
            break;

    }
    
}