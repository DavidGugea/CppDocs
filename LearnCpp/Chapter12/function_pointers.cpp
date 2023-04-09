int foo()
{
	return 5;
}

int goo()
{
	return 6;
}

int main()
{
	int (*fcnPointer)(){&foo};
	fcnPtr = &goo;

	return 0;
}
