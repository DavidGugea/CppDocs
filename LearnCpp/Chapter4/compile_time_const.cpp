#include <iostream>

int main()
{
	const int x {3};
	const int y {3};

	const int z { x + y };

	std::cout << z << "\n";

	return 0;
}
