#pragma once

class MyClass
{   //wnêtrze klasy defaultowo jest PRIVATE
	int variable = 42;
public:
	int getVariable();
	void setVariable(int param);
};