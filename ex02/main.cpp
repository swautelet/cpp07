#include "Array.hpp"

int main()
{
	{
		int size = 10;
		Array <int> test(size);

		for (int i = 0; i < size; i++)
		{
			test[i] = i;
		}

		for (int i = 0; i < size; i++)
		{
			std::cout << test[i] << std::endl;
		}
	}

	{
		int size = 10;
		Array <std::string> test(size);

		for (int i = 0; i < size; i++)
		{
			test[i] = "test";
		}

		for (int i = 0; i < size; i++)
		{
			std::cout << test[i] << std::endl;
		}
	}
	{
		Array<std::string> test;
	}
}