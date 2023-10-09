// mani.cpp
#include <iostream>
#include "Functions.h"
#include "Structurs.hpp"
#include "Data.hpp"

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	std::cout << sum(10,5.5) << std::endl;
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

	print_arr(_ARR, _SIZE);









	return 0;
}