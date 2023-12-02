//Создайте многофайловый проект на C++, который содержит 
//основной файл main.cpp и дополнительный файл с функциями 
//utilities.cpp.Функции из utilities.cpp должны выполнять 
//различные математические операции, такие как сложение, 
//вычитание, умножение и деление.cc

#include <iostream>
#include "Utilites.h"

int main() {
	setlocale(LC_ALL, "rus");
	std::cout << Sum(4, 7) << std::endl;
	std::cout << Proizv(4, 9) << std::endl;
	std::cout << Def(10, 5) << std::endl;

	return 0;
}