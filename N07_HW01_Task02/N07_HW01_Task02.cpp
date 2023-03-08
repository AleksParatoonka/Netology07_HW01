// N07_HW01_Task02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <variant>
#include <vector>

std::variant<int, std::string, std::vector<int>> get_variant() {
	std::srand(std::time(nullptr));
	int random_variable = std::rand() % 3;

	std::variant<int, std::string, std::vector<int>> result;
	switch (random_variable)
	{
	case 0:
		result = 5;
		break;
	case 1:
		result = "string";
		break;
	case 2:
		result = std::vector<int>{ 1, 2, 3, 4, 5 };
		break;
	default:
		break;
	}
	return result;
}

int main()
{
    //std::cout << "Hello World!\n";
	auto test = get_variant();
	if (std::holds_alternative<int>(test)) {
		std::cout << "int" << std::endl;
		std::cout << std::get<int>(test)*2 << std::endl;
	}
	if (std::holds_alternative<std::string>(test)) {
		std::cout << "std::string" << std::endl;
		std::cout << std::get<std::string>(test) << std::endl;
	}
	if (std::holds_alternative<std::vector<int>>(test)) {
		//auto array1 = std::get<std::vector<int>>(test);
		std::cout << "std::vector<int>" << std::endl;
		for (int numb : std::get<std::vector<int>>(test)) {
			std::cout << numb << " ";
		}
		std::cout << std::endl;
	}
}