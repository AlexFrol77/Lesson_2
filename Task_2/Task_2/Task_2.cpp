#include <iostream>
#include <string>
#include <windows.h>

struct Credit {
	int UserScore;
	std::string UserName;
	double UserSizeScore;
};

void setData(Credit* obj) {						// Заполнение структуры по указателю
	std::cout << "Введите номер счёта: ";
	std::cin >> obj->UserScore;
	std::cout << "Введите имя владельца: ";
	std::cin >> obj->UserName;
	std::cout << "Введите баланс: ";
	std::cin >> obj->UserSizeScore;
}
void setNewSizeScore(Credit& obj) {             // обработка структуры по ссылке (внесение изменений в баланс)
	std::cout << "Введите новый баланс: ";
	std::cin >> obj.UserSizeScore;
}
void print(Credit& obj) {						// обработка структуры по ссылке (печать в консоль)
	std::cout << "Ваш счёт: " << obj.UserName << " " << obj.UserScore << " " << obj.UserSizeScore << std::endl;
}

int main(int argv, char** argc) {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Credit User;
	setData(&User);                             // Установка данных в структуре
	setNewSizeScore(User);						// Запрос на изменение баланса 
	print(User);								// Печать данных о счёте
	return 0;
}