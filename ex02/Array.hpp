#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>

template <class T>
class Array{
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& copi);
		~Array();
		Array& operator =(const Array& copi);
		unsigned int size() const;
		T& operator[](unsigned int i);
		class OutOfRange:public std::exception{
			const char* what() const throw();
		};

	private:
		unsigned int const _size;
		T* _content;

	protected:

};

#endif