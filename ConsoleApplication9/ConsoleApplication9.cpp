#include <iostream>

int main()
{
	std::cout << "Hello World";

	for (int i(0); i < 10; ++i)
	{
		std::cout << i - 1 << "\n";
	}

	int a, b;
	std::cin >> a >> b;
	std::cout << a << "  " << b;

	int arr[5]{};

	for (int a : arr)
	{
		arr[a] = a;
	}
}

