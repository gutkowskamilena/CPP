#pragma once
#include <string>
struct Adress
{
	std::string _streetName;
	int _houseNumber;
};
class Student {

	Adress _adress;
	std::string _name;
	std::string _surname;

	int* grades = nullptr;         //dynamiczna tablica ocen
	int noOfGrades = 0;            //ilosc ocen maksymalna = rozmiar tablicy
	int index = 0;                 //numer indeksu w tablicy


public:
	Student();
	Student(int noOfGrades);
	Student(std::string streetName, int houseNumber);
	Student(Adress adress);
	~Student();

	void setName(std::string name);
	void setSurname(std::string surname);
	void getName();
	void getSurname();
	void addGrade(int grade);
	double average();
	void getStudentsGrades();

};