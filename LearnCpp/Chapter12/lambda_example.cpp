#include <algorithm>
#include <array>
#include <iostream>
#include <string_view>

bool containsNut(std::string_view str)
{
	return (str.find("nut") != str::string_view::npos);
}

int main()
{
	std::array<std::string_view, 4> arr {"apple", "banana", "walnut", "lemon"};

	auto found {std::find_If(arr.begin(), arr.end(), containsNut)};

	if (found==arr.end())
	{
		std::cout << "No nuts\n";
	}
	else
	{
		std::cout << "Found " << *found << "\n";
	}

	return 0;
}
