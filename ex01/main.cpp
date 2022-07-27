#include "iter.hpp"

void	improve(std::string& str)
{
	str.append("\n");
}

void	improve(int& i)
{
	i += 100;
}

int main()
{
	{
	int size = 5;
	std::string* test = new std::string[size];

	for (int i = 0; i < size; i++)
	{
		test[i] = "test";
	}

	std::cout << "Before : " << std::endl << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << test[i];
	}

	iter(test, size, &improve);

	std::cout << std::endl << "After : " << std::endl << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << test[i];
	}
	delete[] test;
	}
	{
	int size = 5;
	int* test = new int[size];

	for (int i = 0; i < size; i++)
	{
		test[i] = i;
	}

	std::cout << "Before : " << std::endl << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << test[i] << std::endl;
	}

	iter(test, size, &improve);

	std::cout << std::endl << "After : " << std::endl << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << test[i] << std::endl;
	}
	delete[] test;
	}
}