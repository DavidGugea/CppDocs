#include <iostream>


namespace Foo {
	int doSomething(int x, int y)
	{
		return x + y;
	}
}

namespace Bar {
	int doSomething(int x, int y)
	{
		return x - y;
	}
}

namespace Baz {
	int doSomething(int x, int y)
	{
		return x * y;
	}
}

int main()
{
	int a, b;
	std::cin >> a >> b;

	std::cout << Foo::doSomething(a, b) << "\n";
	std::cout << Bar::doSomething(a, b) << "\n";
	std::cout << Baz::doSomething(a, b) << "\n";

	return 0;
}
