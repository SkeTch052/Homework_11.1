#include <iostream>
#include <Windows.h>
#include <locale.h>
#include "Lib/GreeterLib/Greeter.h"

int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    Greeter_ns::Greeter G;
    std::string name;
    std::cout << "Введите имя: ";
    std::cin >> name;
    std::cout << G.greeter(name) << std::endl;
    return 0;
}