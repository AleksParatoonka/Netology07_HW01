// N07_HW01_Task01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <vector>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //std::vector =
    //std::vector <int> array1 = { 4, 7, 9, 14, 12};
    std::vector <int> array1 = { 4, 7, 9, 14, 12 };
    std::cout << "������� ������:  ";
    for (int numb : array1) {
        std::cout << numb << " ";
    }
    std::cout << std::endl;
    std::cout << "�������� ������:  ";
    auto lambda = [](int x) { return x * 3; };
    //[] {};
    for (int numb : array1) {
        std::cout << lambda(numb) << " ";
    }

    //�� ������ ����� ������������ ������ begin � end - ��� ������� � ��������� 1
}