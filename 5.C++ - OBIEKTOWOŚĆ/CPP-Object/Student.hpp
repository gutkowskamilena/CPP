#pragma once
#include <string>
#include <iostream>
struct Adress
{
	std::string _streetName = "";
	int _houseNumber = 0;
	Adress();
	Adress(std::string streetName, int houseNymber);
	void setHouseNo(int houseNo);
};

class Student;

class Promotor
{
	Student& student;
	std::string name;
public:
	Promotor(Student& student);
	~Promotor();
	void receiveEmail(std::string emailCopy);
	void setName(std::string name);
};

class Student {

	//Adress& _adress;
	std::string _name;
	std::string _surname;
	Promotor* promotor = nullptr;            //wskaünik czyli po prostu adres w pamieci

	int* grades = nullptr;         //dynamiczna tablica ocen
	int noOfGrades = 0;            //ilosc ocen maksymalna = rozmiar tablicy
	int index = 0;                 //numer indeksu w tablicy


public:
	Student();
	Student(int noOfGrades);
	Student(std::string streetName, int houseNumber);
	Student(Adress& adress);
	Student(Promotor promotor);
	~Student();

	void setName(std::string name);
	void setSurname(std::string surname);
	void getName();
	void getSurname();
	void addGrade(int grade);
	double average();
	void getStudentsGrades();
	int getHouseNo();
	void setPromotor(Promotor* promotor);            //metoda ta przymuje wskaünik * na promotora czyli adres w pamieci, dlatego w mainie uøywamy tu &, ktÛrym pobieramy adres obiektu
	void sendEmailToPromotor();

};