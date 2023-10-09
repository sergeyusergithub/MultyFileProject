//Functions.cpp

#include "Functions.h"


double sum(double num1, double num2) {
	return num1 + num2;
}

void range(int a, int b){
	for (int i = a; i <= b; i++)
		std::cout << i << ' ';
	std::cout << std::endl;
}
