// hello_world.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "stdio.h"

float addition(float num1, float num2);
float division(float num1, float num2);
float multiplication(float num1, float num2);

int main()
{

	float num1, num2;

	std::cout << "enter two numbers and I will return the sum of them, the devision of them and the multiplication of them\n";
	
	std::cout << "first number please: ";
	std::cin >> num1;
	std::cout << "\nsecond number please: ";
	std::cin >> num2;

	std::cout << "addition: " << addition(num1, num2) << "\n";
	std::cout << "division: " << division(num1, num2) << "\n";
	std::cout << "multiplication: " <<  multiplication(num1, num2) << "\n";

	system("pause");
    return 0;
}

float addition(float num1, float num2) {
	return num1 + num2;
}

float division(float num1, float num2) {
	if (num1 == 0.0 || num2 == 0.0) {
		std::cout << "you cannot break me, you cannot divide ny zero";
		return 0;
	}

	return num1 / num2;
}

float multiplication(float num1, float num2) {
	return num1 * num2;
}
