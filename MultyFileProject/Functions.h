﻿//Functions.h

#pragma once

#include <iostream>
//#include "Data.hpp" // ОШИБКА!!

extern int _A; // extern - модификация, показывающая,
// что данная переменная уже 
// создана, но в другом файле

// Вычисление суммы двух чисел
double sum(double num1, double num2);

// Вывод целых чисел от a до b
void range(int a, int b);

// Вывод массива в консоль
template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << "{ ";
	for (int i = 0; i < length; i++) {
		std::cout << arr[i] << ", ";
	}
	std::cout << "\b\b }\n";
	//std::cout << "...A = " << _A << std::endl;

}