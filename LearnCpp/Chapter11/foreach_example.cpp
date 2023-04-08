#include <iostream>
#include <iterator>

int main() {
	constexpr int scores[]{84, 92, 76, 81, 56};
	constexpr int numStudents {std::size(scores)};

	int maxScore {0};

	for (int student{0}; student < numStudents; ++student) {
		if (scores[student] > maxScore)
			maxScore = scores[student];
	}

	std::cout << "The best score was " << maxScore << "\n";

	constexpr int fibonacci[]{ 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };
    for (int number : fibonacci) // iterate over array fibonacci
    {
       std::cout << number << ' '; // we access the array element for this iteration through variable number
    }

    std::cout << '\n';

	return 0;
}
