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
		enterFileToVector();
		std::cout << "Wczytano plik " << _fileName << std::endl;
	}
	else
	{
		throw std::string("Nie mozna otworzyc pliku");
	}
	
}

File::File(std::string yourFileName, std::string format)
{
	_fileName = yourFileName + "." + format;
	std::ofstream fileToWrite(_fileName);
	if (fileToWrite.is_open())
	{
		std::cout << "Stworzono plik " << _fileName << std::endl;
	}
	else
	{
		std::cout << "Nie mozna utworzyæ pliku" << std::endl;
	}
}

File::File(const File& old)
{
}

File::~File()
{
	//if (file.is_open())
	file.close();
	//else if (fileToWrite.is_open())
	fileToWrite.close();
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
	std::cout << std::endl;
}

std::string File::getFileName()
{
	return _fileName;
}

void File::dataForm(std::string name, std::string surname, int salary)
{
	//co zrobiæ ¿eby na pierwszym miejscu wektora nie by³ empty object?

	//Employee employee;
	std::random_device r;
	std::mt19937_64 mt_engine(r());
	std::uniform_int_distribution<int> realDistrbituion(100, 999);
	employee._ID = realDistrbituion(mt_engine);

	employee._name = name;
	employee._surname = surname;
	
	employee._ID_str = std::to_string(employee._ID);
	employee._salary = salary;
	employee._salary_str = std::to_string(employee._salary);
	_employeeList.push_back(employee);
	std::ofstream fileToWrite(_fileName,std::ios_base::app);
	fileToWrite  <<std::endl<< name << "\n" << surname << "\n" << employee._ID << "\n" << salary;
}
//void File::deleteEmployee(int ID)
//{
//	std::vector<Employee>::iterator it;
//
//	it = _employeeList.begin();
//	//pêtla wyszukuj¹ca obiekt o danym ID + przypisanie pozycji iteratora do tego obiektu 
//	_employeeList.erase(it);
//
//}
//int File::getIndex(int ID)
//{
//	std::vector < int > ::iterator it;
//	it = _employeeList.begin();
//	return it;
//}
//void File::deleteEmployee(int ID)
//{
//	int index = 0;
//	
//	std::vector < int > ::iterator it = std::find(_employeeList.begin(), _employeeList.end(), ID);
//	it = _employeeList.begin();
//	auto search = [] 
//	if (std::find(_employeeList.begin(), _employeeList.end(), _employeeList[*it]._ID == ID) != _employeeList.end())
//	{
//		it += 
//		_employeeList.erase(it);
//		std::cout << "Pracownik o ID:" << ID << " zostal usuniety z listy" << std::endl;
//	}
//	
//	else
//		std::cout << "Brak pozycji na liœcie" << std::endl;
//
//
//}

void File::printList()
{
	for (int i = 0; i < _employeeList.size()-1 ; ++i)
	{
		std::cout << _employeeList[i]._name << " " << _employeeList[i]._surname << " " << _employeeList[i]._ID_str << "	" << _employeeList[i]._salary_str << "\n";
	}

	std::cout << "\n";
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
