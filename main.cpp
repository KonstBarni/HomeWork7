#include <iostream>
#include <string>
#include "ClassIntegerArray.h"
#include "ExceptionsArray.h"

using namespace std;


int main()
{
    int size;
    while(true)
    {
        cout << "Для выхода нажмите любую букву" << endl;
        cout << "Введите размер контейнера: ";
        cin >> size;

        if(cin.fail())          // выход из программмы
            return 0;

        try 
        {
            IntegerArray conteiner(size);

            conteiner.addInBegin(12);       //добавить в начало
            conteiner.addInBegin(78);
            conteiner.addInBegin(22);
            //conteiner.printEl();

            conteiner.addInEnd(74);         //добавить в конец
            conteiner.addInEnd(43);
            conteiner.addInEnd(86);
            //conteiner.printEl();

            conteiner.addByIndex(2, 333);   //добавить по индексу
            conteiner.addByIndex(6, 435);
            //conteiner.addByIndex(18, 135);    //неверный индекс
            conteiner.printEl();
            cout << "Элементов в контейнере: " << conteiner.getData() << endl;
            cout << endl;

            conteiner.search(12);           //поиск
            //conteiner.search(35);
            conteiner.sorting();            //сортировка
            cout << "Сортировка: "; 
            conteiner.printEl();
            cout <<endl;

            cout << "Удаление: ";
            conteiner.remove(6);            //удаление элемента
            conteiner.printEl();
            cout << "Элементов в контейнере: " << conteiner.getData() << endl;
            cout << endl;

            cout << "Изменение размера: ";
            conteiner.resize(6);            //изменение размера
            conteiner.printEl();
            cout << "Элементов в контейнере: " << conteiner.getData() << endl;

                /*проверка создания, копирования, присваивания*/
            IntegerArray cont2{conteiner};
            cont2 = conteiner;
            cont2 = cont2;
            conteiner = conteiner;
        
        } 

        catch(Exceptions& ex)
        {
            cout << ex.what() << endl;
        }
    
    }
    return 0;
}

