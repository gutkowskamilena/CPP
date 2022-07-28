#include <iostream>
#include "Vector.hpp"

int main()
{
	Vector test;

	std::cout << "cap= " << test.capacity() << std::endl;
	std::cout << "size= " << test.size() << std::endl;
	std::cout << "empty= " << test.empty() << std::endl;

	test.push_back(1);

	std::cout << "cap= " << test.capacity() << std::endl;
	std::cout << "size= " << test.size() << std::endl;
	std::cout << "empty= " << test.empty() << std::endl;
	test.push_back(2);
	test.push_back(3);
	test.push_back(4);
	test.push_back(5);

	std::cout << "cap= " << test.capacity() << std::endl;
	std::cout << "size= " << test.size() << std::endl;
	std::cout << "empty= " << test.empty() << std::endl;

	for (unsigned int i = 0; i < test.size(); ++i)
	{
		std::cout << "[" << i << "]= " << test[i] << std::endl;
	}

	std::cout << "Wstawiam" << std::endl << std::endl;
	test.insert(66, 3);

	for (unsigned int i = 0; i < test.size(); ++i)
	{
		std::cout << "[" << i << "]= " << test[i] << std::endl;
	}
	
	/////////////moj kod

	Vector copyToVector;

	copyToVector.push_back(9);
	copyToVector.push_back(9);
	copyToVector.push_back(7);

	std::cout << "cap copyToVector = " << copyToVector.capacity() << std::endl;
	std::cout << "size copyToVector = " << copyToVector.size() << std::endl;
	std::cout << "empty copyToVector = " << copyToVector.empty() << std::endl;

	for (unsigned int i = 0; i < copyToVector.size(); ++i)
	{
		std::cout << "copyToVector[" << i << "]= " << copyToVector[i] << std::endl;
	}

	std::cout << "Wstawiam caly wekor" << std::endl << std::endl;
	test.copyTo(copyToVector, 1);

	for (unsigned int i = 0; i < test.size(); ++i)
	{
		std::cout << "[" << i << "]= " << test[i] << std::endl;
	}

	std::cout << "size= " << test.size() << std::endl;


	/////////////moj kod

	std::cout << "Usuwam" << std::endl << std::endl;
	test.remove(3);

	for (unsigned int i = 0; i < test.size(); ++i)
	{
		std::cout << "[" << i << "]= " << test[i] << std::endl;
	}

	//std::cout << "Magia: " << test.operator[](2) << " to jest to samo co: " << test[2];

}
