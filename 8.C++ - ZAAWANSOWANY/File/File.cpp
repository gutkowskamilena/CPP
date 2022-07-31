#include "File.hpp"
#include <vector>
#include<random>
#include <algorithm>
#include <numeric>
#include <iostream>
#include<fstream>
#include <string>



File::File(std::string fileName) :_fileName(fileName)
{
	std::ifstream file(_fileName);

	if (file.is_open())
	{
		std::cout << "Wczytano plik " << _fileName << std::endl;
	}
	else
	{
		std::cout << "Nie mozna otworzyc pliku" << std::endl;
	}
	enterFileToVector();
}

File::File(const File& old)
{
}

File::~File()
{
	file.close();
}

void File::printFile()
{
	std::ifstream file(_fileName);
	while (!file.fail() && !file.eof())
	{
		std::string str;
		std::getline(file, str);
		std::cout << str << std::endl;
	}
}

void File::enterFileToVector()
{
	Employee employee;
	std::ifstream file(_fileName);
	int i = 0;
	while (!file.fail() && !file.eof())
	{
		std::getline(file, employee._name);
		std::getline(file, employee._surname);
		std::getline(file, employee._ID_str);
		employee._ID = stoi(employee._ID_str);
		std::getline(file, employee._salary_str);
		employee._salary = stoi(employee._salary_str);
		//std::cout << employee._name << " " << employee._surname << " " << employee._ID << " " << employee._salary << std::endl;
		_employeeList.push_back(employee);
	}
}

void File::sortAscendingBySalary()
{
	

	for (int i = 0; i < _employeeList.size()-1 ; ++i)
	{
		for (int j = 0; j < _employeeList.size()-1 ; ++j)
		{
			if (_employeeList[j]._salary > _employeeList[j + 1]._salary)
			{
				std::swap(_employeeList[j], _employeeList[j + 1]);
			}
		}
	}
	std::cout << "Posortowano liste pracownikow wedlug zarobkow rosnaco: " << std::endl;
	printList();
}

std::string File::getFileName()
{
	return _fileName;
}

void File::printList()
{
	for (int i = 0; i < _employeeList.size()-1 ; ++i)
	{
		std::cout << _employeeList[i]._name << " " << _employeeList[i]._surname << " " << _employeeList[i]._ID_str << "	" << _employeeList[i]._salary_str << std::endl;
	}
}

std::string File::getName(int index)
{
	return _employeeList[index]._name;
}

File::Employee::Employee()
{

}

void File::Employee::setName(std::string name)
{
	_name = name;
}

void File::Employee::setSurname(std::string surname)
{
	_surname = surname;
}

void File::Employee::setID(int ID)
{
	_ID = ID;
	_ID_str = std::to_string(_ID);
}

void File::Employee::setSalary(int salary)
{
	_salary = salary;
	_salary_str = std::to_string(_salary);
}

//auto File::operator[](unsigned int position)
//{
//	//if (position > _size)
//	//{
//	//	//todo: exception
//	//}
//	Employee temp = _employeeList[position];
//	return temp._salary;
//}

//std::ostream& operator<<(std::ostream& s, const File& file)
//{
//	for (int i = 0; i < 10; ++i)
//	{
//		s << file.getName(i) << "	" << _employeeList[i]._surname << "	" << _employeeList[i]._ID_str << "	" << _employeeList[i]._salary_str << std::endl;
//	}
//
//	return s;
//}
