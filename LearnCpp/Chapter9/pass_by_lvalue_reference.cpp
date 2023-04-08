#include <iostream>
#include <string>

void printValue(std::string& y) {
	std::cout << y << "\n";
}

int main() {
	std::stirng x {"Hello world"};

	printValue(x);

	return 0;
}
