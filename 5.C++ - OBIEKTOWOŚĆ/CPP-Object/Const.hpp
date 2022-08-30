#pragma once
#include <string>

class LectureRoom
{
	int size = 0;
	const int floor;
public:
	LectureRoom(int _size): size(_size), floor(_size/10) {}
	static const std::string patronage;
	int getSize() const;                 //dopisujemy na koncu konst zeby powiedziec ze ta metoda  nie bedzie zmieniala stanu naszego obiektu


};