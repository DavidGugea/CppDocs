int main()
{
	const int x {5}; // x is a non-modifiable lvalue
	const int& ref {x}; // ref is an lvalue reference to a const value
}
