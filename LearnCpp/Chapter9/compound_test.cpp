#include <iostream>

int main() {
	int num1 {};
	int den1 {};

	int num2 {};
	int den2 {};

	// Used to eat the slash betweeh the numerator and denominator
	char ignore {};

    std::cout << "Enter a fraction: ";
    std::cin >> num1 >> ignore >> den1;

    std::cout << "Enter a fraction: ";
    std::cin >> num2 >> ignore >> den2;

    std::cout << "The two fractions multiplied: "
        << num1 * num2 << '/' << den1 * den2 << '\n';

	return 0;
}
