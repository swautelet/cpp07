#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

# include <iostream>
# include <string>

template <class T>
void swap (T& a, T& b)
{
	T tmp = b;
	b = a;
	a = tmp;
};
template <class T>
T min (T a, T b)
{
	if (a < b)
		return a;
	else
		return b;
};
template <class T>
T max (T a, T b)
{
	if (a > b)
		return a;
	else
		return b;
};

#endif