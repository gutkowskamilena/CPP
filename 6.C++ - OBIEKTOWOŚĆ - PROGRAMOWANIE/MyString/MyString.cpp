#include "MyString.hpp"

MyString::MyString()
{
	this->arr = new char[1];
	this->arr[0] = '\0';
}

MyString::MyString(char* input)
{
	int length = std::strlen(input);
	this->arr = new char[length + 1];
	
	//skopiowac input->arr, na koncu dopisac 0
	for (int i = 0; i < length; i++)
		arr[i] = input[i];
	arr[length] = '\0';
}

void MyString::print()
{
	std::cout << arr;
}

MyString MyString::append(char* input)
{
	return MyString();
}

MyString MyString::append(MyString input)
{
	return MyString();
}

MyString MyString::firstWord()
{
	return MyString();
}
