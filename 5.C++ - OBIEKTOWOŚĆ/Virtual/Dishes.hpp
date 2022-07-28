#pragma once
class Dish
{
protected:
	int kcal;
public:
	Dish(int _kcal) : kcal(_kcal) {};
	void eat() {
		kcal -= 10;
		std::cout << "Jem danie(ogolne)"
	}


	int getKcal() {
		return kcal;
	}
};

class Soup : public Dish
{
public:
	Soup(int _kcal):Dish(_kcal){}
	void eta();
};

class Main : public Dish
{
public:
	Main(int _kcal) : Dish(_kcal){}
};