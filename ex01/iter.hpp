#ifndef ITER_HPP
# define ITER_HPP

#include<iostream>
#include<string>

template <class lol>
void	iter(lol* first, size_t length, void (*fon)(lol& p))
{
	for (size_t i = 0; i < length; i++)
	{
		fon(*(first + i));
	}
};

#endif