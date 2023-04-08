#include <iostream>

int main()
{
	int a {5};
	int b {5};
	// x is incremented to 6, x is evaluted to the value 6, and 6 is assigned to y
	int y = ++a;
	int z = b++;

	std::cout << "y : " << y << " --- > ++5 \n";
	std::cout << "z : " << z << " --- > 5++ \n";

	return 0;
}
