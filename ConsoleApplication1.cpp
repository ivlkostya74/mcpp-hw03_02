﻿// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <windows.h>;



class Counter {
private:
    int count=0;
   

public:
    Counter()
      {
        //this->count = count;
            }
    Counter(int count) {
        this->count = count;
    }
    int counterPlas() {
        return count ++;
    }
    int counterMines() {
        return count --;
    }
    void prinCounter() {
        std::cout << "Текущее значение счетчика:" << count << std::endl;
    }
    /*void setCounter(int num) {
        count = num;
    }*/

};



int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
   
    //setlocale(LC_ALL, "Russian");
    std::string Str;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет:\n";
    std::cin >> Str;
    std::cout << Str;
    int num=0;
   
    if (Str=="да") {
        std::cout << "Введите начальное значение счётчика:\n";
        std::cin >> num;
       Counter count(num);

    }
    Counter count(num);

    while (Str.compare("х")) {
        std::cout << "Введите команду ('+', '-', '=' или 'x'):\n";
        std::cin >> Str;
        if (Str == "+") {
            count.counterPlas();
        }
        if (Str == "-") {
            count.counterMines();
        }
        if (Str == "=") {
            count.prinCounter();


        }
    }
    std::cout << "До свидания!";
}
