#include <iostream>

#include <string>
#include <string_view>

void printString(std::string_view str)
{
	std::cout << str << "\n";
}

int main()
{
	constexpr std::string_view s {"hello, world!"};
	printString(s);

	return 0;
}
