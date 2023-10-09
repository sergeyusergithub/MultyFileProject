// mani.cpp
#include <iostream>
#include "Functions.h"
#include "Structurs.hpp"
#include "Data.hpp"
#include "DataBase.h"
#include <string>

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	// Использование данных из других файлов
	/*std::cout << sum(10,5.5) << std::endl;
	range(7, 22);

	const int size = 5;
	int arr[size]{ 1,2,3,4,5 };
	print_arr(arr,size);

	Person p1;

	print_person(p1);

	std::cout << "Пи = " << _PI << std::endl;
	std::cout << "A = " << _A << std::endl;

	_A = 42;

	std::cout << "A = " << _A << std::endl;

	print_arr(_ARR, _SIZE);*/




	// Задание "База данных"

	short operation;
	do {
		std::cout << "Выберите действие:\n";
		
		std::cout << "1. Добавить запись;\n";
		std::cout << "2. Удалить записть;\n";
		std::cout << "3. Вывести таблицу;\n";
		std::cout << "4. Завершить работу.\n";
		std::cout << "Ввод -> ";
		std::cin >> operation;

		switch (operation) {
		case 1: {
			std::string name;
			std::cout << "Введите наименование товара -> ";
			std::cin.ignore();
			std::getline(std::cin, name);
			double price;
			std::cout << "Введите стоимость товара -> ";
			std::cin >> price;
			int quantity;
			std::cout << "Введите остаток на складе -> ";
			std::cin >> quantity;
			db_app(name,price,quantity);
			break;
		}
		case 2: {

			break;
		}
		case 3:
			std::cout << "Наименование\tЦена\tОстаток на складе\n";
			print_full_db();
			break;
		case 4:
			break;
		default:
			std::cout << "Такой операции нет.\n";
		}

	} while (operation != 4);

	clear_db();
	std::cout << "Работа завершена.\n\n";




	return 0;
}