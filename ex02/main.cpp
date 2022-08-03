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
		try 
		{
			std::cout << test[0] << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}