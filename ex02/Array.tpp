#include "Array.hpp"

Array::Array():_size(0), _content(NULL)
{

}

Array::Array(unsigned int n): _size(n)
{
	this->_content = new T[n];
}

Array::Array(const Array& copi): _size(copi.size())
{
	this->_content = new T[this->_size];
	for (unsigned int i = 0; i < this->_size; i++)
	{
		this->_content[i] = copi.getielement(i);
	}
}

Array& Array::operator =(const Array& copi)
{
	for (unsigned int i = 0; i < this->_size; i++)
	{
		this->_content[i] = copi[i];
	}
}

Array::~Array()
{
	delete[] this->_content;
}

unsigned int Array::size()
{
	return(this->_size);
}

T& Array::operator[](unsigned int i)
{
	if (i >= this->_size)
	{
		throw(OutOfRange());
	}
	return(this->_content[i]);
}

const char * OutOfRange::what() const throw()
{
	return ("Error this is out of range");
}