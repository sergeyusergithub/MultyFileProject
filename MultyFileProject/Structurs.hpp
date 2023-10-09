// Structurs.hpp
#pragma once

#include <iostream>

struct Person {
	std::string name = "noname";
	int age = 18;
	std::string job = "programmer";
	int salary = 50000;
};

// ����� ������� ��������� Person � �������
void print_person(const Person& p);