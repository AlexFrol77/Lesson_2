#include <iostream>
#include <string>
#include <windows.h>

struct Address {

	std::string country;
	std::string city;
	std::string street;
	int house;
	int floor;
	int flat;
	int ind;
};

void setData(Address& obj) {
	std::cout << "Введите страну: ";
	std::cin >> obj.country;
	std::cout << "Введите город: ";
	std::cin >> obj.city;
	std::cout << "Введите улицу: ";
	std::cin >> obj.street;
	std::cout << "Введите номер дома: ";
	std::cin >> obj.house;
	std::cout << "Введите этаж: ";
	std::cin >> obj.floor;
	std::cout << "Введите номер квартиры: ";
	std::cin >> obj.flat;
	std::cout << "Введите индекс: ";
	std::cin >> obj.ind;
}

void print(Address& obj) {
	std::cout << "Страна: " << obj.country << std::endl;
	std::cout << "Город: " << obj.city << std::endl;
	std::cout << "Улица: " << obj.street << std::endl;
	std::cout << "Номер дома: " << obj.house << std::endl;
	std::cout << "Номер этажа: " << obj.floor << std::endl;
	std::cout << "Номер квартиры: " << obj.flat << std::endl;
	std::cout << "Индекс: " << obj.ind << std::endl;
	std::cout << std::endl;
}

int main(int argv, char** argc) {
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Address UserFirst{ "Россия", "Москва", "Авангардная", 11, 5, 14, 125493 };
	Address UserSecond{ "Россия", "Москва", "Шлюзовая", 1, 7, 144, 125497 };
	Address UserThird{ "Россия", "Санкт-Петербург", "Невская", 15, 9, 13, 123493 };
	system("cls");
	print(UserFirst);
	print(UserSecond);
	print(UserThird);
	return 0;
}