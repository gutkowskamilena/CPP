#pragma once
#include "EmployeeList.hpp"
#include <string>
#include <iostream>

class University
{
	//Employee* employees = new Employee[100]; // nie mozemy jesli Employee jest abstrakcyjna klasa i/lub nie ma bezparametrowego konstruktora
	/*Employee** staff; */
	EmployeeList list;
public:
	double calculateEmployerCost();
	void printTeachingStaff();
	void printAllStaffNetIncomes(int hoursInMonth);
	void add(Employee* object);
	//void remove(Employee* object); 
	//[1, 5, 8, 13, 2, 5, 7]
	//[1, 5, 8, 0, 2, 5, 7]
	//[1, 5, 8, 2, 5, 7, 7]
	//[1, 5, 8, 2, 5, 7, 0]
	//[1, 5, 8, 2, 5, 7]
};

class Student;
class Course;

class CourseList
{
	Course** courses;
	Course** resizeArray();
	void copyElements(Course** target);
	int count = 0;
	int maxStaffSize = 1;
public:
	CourseList();
	virtual ~CourseList();
	//EmployeeList(const EmployeeList& obj); //copy constructor
	//EmployeeList& operator=(const EmployeeList& obj); //copy assignment operator
	void add(Course* object);
	Course* get(int index);
	int getCount();
};

class StudentList
{
	Student** students;
	Student** resizeArray();
	void copyElements(Student** target);
	int count = 0;
	int maxStaffSize = 1;
public:
	StudentList();
	virtual ~StudentList();
	void add(Student* object);
	Student* get(int index);
	int getCount();
};

class Course
{
	std::string name;
	Employee* tutor; //EducationalEmployee jako klasa/warstwa posrednia
	StudentList list;
public:
	Course(std::string name);
	friend std::ostream& operator<<(std::ostream& s, const Course& c);
	void setTutor(Employee* tutor); //potrzebne zabezpieczenie przed niepoprawnym prowadzacym
	void addStudent(Student* student);
	void printAllStudents();
};

std::ostream& operator<<(std::ostream& s, const Course& c);

class Student
{
	std::string firstName;
	std::string secondName;
	CourseList list;
public:
	Student(std::string firstName, std::string lastName);
	friend std::ostream& operator<<(std::ostream& s, const Student& student);
	void signIn(Course* course);
	void printAllCourses();
	//void resign(Course* course); (do rozwiazania poza zajeciami)
};

std::ostream& operator<<(std::ostream& s, const Student& student);
