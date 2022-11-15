#include <iostream>
#include <string>
#include <windows.h>

struct Credit {
	int UserScore;
	std::string UserName;
	double UserSizeScore;
};

void setData(Credit* obj) {
	std::cout << "Введите номер счёта: ";
	std::cin >> obj->UserScore;
	std::cout << "Введите имя владельца: ";
	std::cin >> obj->UserName;
	std::cout << "Введите баланс: ";
	std::cin >> obj->UserSizeScore;
}
void setNewSizeScore(Credit& obj) {
	std::cout << "Введите новый баланс: ";
	std::cin >> obj.UserSizeScore;
}
void print(Credit& obj) {
	std::cout << "Ваш счёт: " << obj.UserName << " " << obj.UserScore << " " << obj.UserSizeScore << std::endl;
}

int main(int argv, char** argc) {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Credit User;
	setData(&User);
	setNewSizeScore(User);
	print(User);
	return 0;
}