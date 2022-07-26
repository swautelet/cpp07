#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

# include <iostream>
# include <string>

template <class lol>
void swap (lol& a, lol& b)
{
	lol tmp = b;
	b = a;
	a = tmp;
};
template <class lol>
lol min (lol a, lol b)
{
	if (a < b)
		return a;
	else
		return b;
};
template <class lol>
lol max (lol a, lol b)
{
	if (a > b)
		return a;
	else
		return b;
};

#endif