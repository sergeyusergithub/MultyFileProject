#include "Structurs.hpp"

void print_person(const Person& p){
	std::cout << "Имя: " << p.name << std::endl;
	std::cout << "Возраст: " << p.age << std::endl;
	std::cout << "Должность: " << p.job << std::endl;
	std::cout << "Зарплата: " << p.salary << std::endl;
}
