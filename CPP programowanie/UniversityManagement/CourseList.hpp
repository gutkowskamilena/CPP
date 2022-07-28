#pragma once
#include "EmployeeManagement.hpp"
#include "UniversityManagement.hpp"

class CourseList
{
	Course** staff;
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
