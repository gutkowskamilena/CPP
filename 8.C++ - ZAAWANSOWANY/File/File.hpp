#pragma once
#include <iostream>
#include <fstream>
#include "File.hpp"
#include <vector>
#include<random>
#include <algorithm>
#include <numeric>
#include <string>

//std::ostream& operator<<(std::ostream& os, const File& c) {
//	
//	os << c._employeeList[i] << '+' << c.imag << 'i' << std::endl;
//	return os;
//}
//
//
//std::istream& operator>>(std::istream& is , MyComplex& c) {
//	is >> c.real >> c.imag;
//	return is;
//}

class File 
{

	struct Employee
	{
		std::string _name;
		std::string _surname;
		std::string _ID_str;
		std::string _salary_str;
		int _ID = 0;
		int _salary = 0;
		Employee();
		void setName(std::string name);
		void setSurname(std::string surname);
		void setID(int ID);
		void setSalary(int salary);

	};
private:
	
	Employee employee;
	std::string _fileName;
	std::vector < Employee > _employeeList{ employee };
public:

	std::ifstream file;
	std::ofstream fileToWrite;
	File(std::string fileName);                               //c-tor otwierajacy istniejacy plik
	File(std::string yourFileName, std::string format);           //c-tor tworzacy nowy plik
	File(const File &old);
	~File();
	std::string getFileName();
	void printFile();
	void enterFileToVector();
	void sortAscendingBySalary();
	void printList();
	std::string getName(int index);
	void dataForm(std::string name, std::string surname, int salary);           //formularz pozwala na dopisywanie pracowników do listy

	//std::ostream& operator<<(std::ostream& s, const File& v);
	//auto operator[](unsigned int position);
};

//std::ostream& operator<<(std::ostream& s, const File& v) {
//
//	std::ifstream file(c.getName());
//	while (!file.fail() && !file.eof())
//	{
//		std::string str;
//		std::getline(file, str);
//		os << str << std::endl;
//	}
//	
//	return s<< v.get();
//}

//std::ostream& operator<<(std::ostream& s, const File& r);