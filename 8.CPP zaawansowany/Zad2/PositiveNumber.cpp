#include <iostream>
#include "PositiveNumber.hpp"

positiveNumber::positiveNumber(double value)
{
	setValue(value);
}

positiveNumber::positiveNumber(double value)
{

}

positiveNumber::positiveNumber()
	:positiveNumber(0.0)
{
}

positiveNumber::positiveNumber(float value)
	: positiveNumber(static_cast<double>(value))
{
}

positiveNumber::positiveNumber(int value)
	: positiveNumber(static_cast<double>(value))
{
}

positiveNumber::~positiveNumber()
{
}

double positiveNumber::getValue(double value) const
{
	return _value;
}

void positiveNumber::setValue(double value)
{
	if (value < 0)
	{
		throw std::string("NIE MOZE BYC UJEMNA");
	}
	else
	{
		_value = value;
	}
}

void positiveNumber::setValue(float value)
{
	setValue(static_cast<double>(value));
}

void positiveNumber::setValue(int value)
{
	setValue(static_cast<double>(value));
}

positiveNumber& positiveNumber::operator+(const positiveNumber& second)
{
	if (second.getValue() < 0)
	{
		if
	}
	else
	{
		this->setValue(this->getValue() + second.getValue());
	}
}

positiveNumber& positiveNumber::operator-(const positiveNumber& second)
{
	if(this->getValue())

}
