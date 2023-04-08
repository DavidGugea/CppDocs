#include <iostream>

int main()
{
	/*
	// POINTER TO CONST VALUE

	const int x {5};
	const int* ptr {&x};
	*/

	/*
	// CONST POINTER TO A VALUE
	int x {5};
	int* const ptr {&x};
	*/

	// CONST POINTER TO A CONST VALUE
	int value {5};
	const int* const ptr {&value};

	return 0;
}
