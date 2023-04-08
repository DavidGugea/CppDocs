#include <iostream>

int five()
{
	return 5;
}

int main()
{
	constexpr double pi { 3.14159 }; // 3.14159 is a double literal in standard notation
	constexpr double avogadro { 6.02e23 }; // 6.02 x 10^23 is a double literal in scientific notation
	double electronCharge { 1.6e-19 }; // charge on an electron is 1.6 x 10^-19

	constexpr double gravity {9.8};
	constexpr int sum { 4 + 5 };
	constexpr int something {sum};

	std::cout << "Enter you age: ";
	int age{};
	std::cin >> age;

	/*
	constexpr int myAge {age}; // compile error: age is not a constant
	constexpr int f { five() }; // compile error: return value of five() is not a constant expression.
	*/

	return 0;
}
