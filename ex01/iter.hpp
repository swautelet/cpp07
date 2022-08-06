#ifndef ITER_HPP
# define ITER_HPP

#include<iostream>
#include<string>

template <class iter>
void	iter(iter* first, size_t length, void (*fon)(iter& p))
{
	if (!first || !fon)
		return ;
	for (size_t i = 0; i < length; i++)
	{
		fon(first[i]);
	}
};

#endif