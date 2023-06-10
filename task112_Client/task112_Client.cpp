#include <iostream>
#include <windows.h>
#include "task112_Library.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    std::system("chcp 1251");


    task112_Library::Greeter vlad;
    std::cout << "Введите имя: ";
    std::string name;
    std::cin >> name;
    std::cout << "Здравствуйте, " << vlad.get_greet(name) << "!" << std::endl;


    return 0;
}
