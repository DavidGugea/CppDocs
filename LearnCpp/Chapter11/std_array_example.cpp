#include <array>

int main() {
	std::array<int, 5> myArray = {1, 2, 3, 4, 5};
	std::array<int, 3> myArray2 = {1, 2, 3};

	std::cout << "length: " << myArray.size() << "\n";

	return 0;
}