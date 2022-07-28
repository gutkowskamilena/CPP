#include "Student.hpp"
#include <iostream>

Student::Student()
{
}

Student::Student(int noOfGrades)
{
	//tworzymy dynamicznie tablice o dlugosci noOfGrades
	//przypisujemy wskaznik na poczatek tej tablicy do pola grades
	grades = new int[noOfGrades];
	this->noOfGrades = noOfGrades;
}

Student::Student(std::string streetName, int houseNumber)
{
	_adress._streetName = streetName;
	_adress._houseNumber = houseNumber;
}

Student::Student(Adress adress)
{
	_adress = adress;
}

Student::~Student()
{
	//w tym konkretnym kontekscie to nie ma sensu bo konstruktor sie wykona zawsze
	//ale to dobra praktyka, by sprawdzic czy usuwajac wskaznik (obiekt zaalokowany) odwolujemy sie do niepustego wskaznika
	if (grades != nullptr) 
	{
		delete[] grades;
		//podobnie jak w komentarzu wyzej - niepotrzebne
		grades = nullptr;
	}
}
void Student::setName(std::string name)
{
	_name = name;
}

void Student::setSurname(std::string surname)
{
	_surname = surname;
}

void Student::getName()
{
	std::cout << _name << std::endl;
}

void Student::getSurname()
{
	std::cout << _surname << std::endl;
}

void Student::addGrade(int grade)
{
	if (index < noOfGrades) //sprawdzmy czy nie piszemy poza tablica
	{
		grades[index] = grade;
		index++;
	}

}

double Student::average()
{
	double sum = 0;
	for (int i = 0; i < index; i++)
	{
		sum += grades[i];
	}
	return sum / index;
}

void Student::getStudentsGrades()
{
	for (int i = 0; i < noOfGrades; ++i)
	{
		std::cout << grades[i] << "  ";
	}
	std::cout << std::endl;
}

