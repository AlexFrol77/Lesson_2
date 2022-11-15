#include <iostream>
#include <string>
#include <windows.h>

enum class Mon {
	Jan = 1,
	Feb,
	March,
	April,
	May,
	June,
	July,
	Aug,
	Sept,
	Oct,
	Nov,
	Dec
};


int main(int argc, char** argv) {
	setlocale(LC_ALL, "Rus");
	int temp;
	do {
		std::cout << "Введите номер месяца: ";
		std::cin >> temp;
		if (temp < 0 || temp > 12) {
			std::cout << "Неправильный номер!" << std::endl;
		}
		else {
			switch (temp) {
			case static_cast<int>(Mon::Jan):
				std::cout << "Январь" << std::endl;
				break;
			case static_cast<int>(Mon::Feb):
				std::cout << "Февраль" << std::endl;
				break;
			case static_cast<int>(Mon::March):
				std::cout << "Март" << std::endl;
				break;
			case static_cast<int>(Mon::April):
				std::cout << "Апрель" << std::endl;
				break;
			case static_cast<int>(Mon::May):
				std::cout << "Май" << std::endl;
				break;
			case static_cast<int>(Mon::June):
				std::cout << "Июнь" << std::endl;
				break;
			case static_cast<int>(Mon::July):
				std::cout << "Июль" << std::endl;
				break;
			case static_cast<int>(Mon::Aug):
				std::cout << "Август" << std::endl;
				break;
			case static_cast<int>(Mon::Sept):
				std::cout << "Сентябрь" << std::endl;
				break;
			case static_cast<int>(Mon::Oct):
				std::cout << "Октябрь" << std::endl;
				break;
			case static_cast<int>(Mon::Nov):
				std::cout << "Ноябрь" << std::endl;
				break;
			case static_cast<int>(Mon::Dec):
				std::cout << "Декабрь" << std::endl;
				break;

			default:
				break;
			}
		}
	} while (temp != 0);
	std::cout << "До свидания" << std::endl;
	Sleep(2000);
	return 0;
}