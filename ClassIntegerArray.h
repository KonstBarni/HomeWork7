#pragma once

class IntegerArray
{
    int _size{};
    int _data{0};
    int *arr{};
public:
    IntegerArray()= default;
    IntegerArray(int size);
    IntegerArray(const IntegerArray& other);
    IntegerArray& operator=(const IntegerArray& oper);
    int& operator[](int index);

    int getSize();
    int getData();                              //получить кол-во элементов

    void addByIndex(int index, int el);         //добавить по индексу
    void addInBegin(int el);                    //добавить в начало
    void addInEnd(int el);                      //добавить в конец
    void resize(int newSize);                   //изменить размер
    void search(int el);                        //поиск элемента
    void remove(int index);                     //удаление элемента
    void sorting();                             //сортировка
    void printEl();                             //вывод всех элементов
    

    ~IntegerArray();

};