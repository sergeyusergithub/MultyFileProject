#include "Structurs.hpp"

void print_person(const Person& p){
	std::cout << "���: " << p.name << std::endl;
	std::cout << "�������: " << p.age << std::endl;
	std::cout << "���������: " << p.job << std::endl;
	std::cout << "��������: " << p.salary << std::endl;
}
