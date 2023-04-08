#include <iostream>

int main()
{
	int array[5] {9, 7, 5, 3, 1};

	int* value {new (std::nothrow) int};

	std::cout << "Element 0 has address: " << &array[0] << "\n";
	std::cout << "The array decays to a pointer holding address: " << array << "\n";

	return 0;
}
