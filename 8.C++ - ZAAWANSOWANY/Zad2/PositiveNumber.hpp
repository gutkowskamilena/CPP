#include <iostream>

class positiveNumber
{
public:
	positiveNumber();
	positiveNumber(double value);
	positiveNumber(float value);
	positiveNumber(int value);
	virtual ~positiveNumber();
	positiveNumber(const positiveNumber&) = default; //CPP11 jawnie prosimy kompilator o wygenerowanie domyœlnego c-tora kopiuj¹cego

	void getValue() const;
	void setValue(double value);
	void setValue(float value);
	void setValue(int value);

	positiveNumber& operator+(const positiveNumber& second);
	positiveNumber& operator-(const positiveNumber& second);
	positiveNumber& operator+(double number);
	positiveNumber& operator-(double number);
	positiveNumber& operator+(const positiveNumber& second);



private:
	double _value;

};
