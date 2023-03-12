// N07_HW01_Task01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <vector>
#include <algorithm>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::vector <int> array1 = { 4, 7, 9, 14, 12 };
    std::cout << "Входные данные:  ";
    for (int numb : array1) {
        std::cout << numb << " ";
    }
    std::cout << std::endl;

    std::cout << "Выходные данные:  ";
    //auto lambda = [](int x) { return x+(x * 2)*(x%2); };

    std::for_each(array1.begin(), array1.end(), [](int& n) { n+=(2*n)*(n%2); });
    for (int numb : array1) {
        std::cout << numb << " ";
    }
}