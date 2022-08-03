#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>

template <class T>
class Array{
	public:
		class OutOfRange:public std::exception{
			const char* what() const throw(){
				return ("Error this is out of range");
			}
		};
		Array<T>(){
			this->_size = 0;
			this->_content = NULL;;
		}
		Array<T>(unsigned int n){
			this->_size = n;
			this->_content = new T[n];
		}
		Array<T>(const Array<T>& copi){
			this->_size = copi.size();
			this->_content = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
			{
				this->_content[i] = copi[i];
			}
		}
		~Array<T>(){
			delete[] this->_content;
		}
		Array<T>& operator =(const Array<T>& copi){
			for (unsigned int i = 0; i < this->_size; i++)
			{
				this->_content[i] = copi[i];
			}
		}
		unsigned int size() const{
			return(this->_size);
		}
		T& operator[](ssize_t i){
			if (i >= this->_size || i < 0)
			{
				throw(OutOfRange());
			}
			return(this->_content[i]);
		}

	private:
		unsigned int _size;
		T* _content;

	protected:

};

#endif