#include<iostream>
#include "MyClass.hpp"
#include "Shape.hpp"
#include "Account.hpp"
#include<string>
#include "Student.hpp"
#include "Car.hpp"


void zadMyClassShape()
{
	MyClass o1, o2;										//tworzymy dwa obiekty
	o1.setVariable(16);                                 //w o1 zmieniamy wartosc, w o2 zostaje domyslna wartosc w polu "variable"
	int value = o1.getVariable();						//pobranie wartosci
	int value2 = o2.getVariable();
	std::cout << value << " " << value2 << std::endl;


	Rectangle rect;
	rect.setDimensions(3, 7);
	std::cout << rect.getField() << " " << rect.getCircuit() << std::endl;

	Rectangle rect2(5,8);                              //z konstruktorem sparametryzowanym   
	std::cout << rect2.getField() << " " << rect2.getCircuit() << std::endl;

	Circle myCircle;
	myCircle.setDimension(1);
	std::cout << myCircle.getField() << " " << myCircle.getCircuit() << std::endl;

	//Prostokast z wykoszytaniem struktury 
	Point firstPoint;
	firstPoint.x = 2;
	firstPoint.y = 4;
	Point secondPoint;
	secondPoint.x = -1;
	secondPoint.y = -3;
	Rectangle rect3(firstPoint, secondPoint);
	std::cout << "Prostokat ze struct w konstruktorze" << std::endl << "Pole: " << rect3.getField() << std::endl << "Obwod: " << rect3.getCircuit() << std::endl;
}

void zadAccount() {
	Account prv;
	prv.deposit(150);	// 150
	//prv.deposit(-10);	// warto obsluzyc
	std::cout << prv.getBalance() << std::endl;
	int cash = prv.withdraw(100); //balance = 50, cash = 100
	std::cout << cash << "  " << prv.getBalance() << std::endl;
	cash = prv.withdraw(100); //balance = 0, cash = 50
	std::cout << prv.getBalance() << " " << cash << std::endl;
	//prv.withdraw(-10) // warto obsluzyc

	//wykorzystanie kontruktora kopiuj¹cego
	Account first;
	first.generateBankNumber();
	first.deposit(75);
	Account copyObject(first);

}

void zadStudent()
{
	Student first(4);
	first.setName("Pawel");
	first.setSurname("Kowal");
	first.addGrade(2);
	first.addGrade(3);
	first.addGrade(4);
	first.addGrade(5);
	first.getName();
	first.getSurname();
	first.getStudentsGrades();
	std::cout << "Srednia ocen: " << first.average();

	//kompozycja
	Student studentKompozycja("Grójecka", 39);

	//agregacja
	Adress adress("Grójecka", 39);
}

void zadCar()
{
	Car AlfaRomeo(EngineType::petrol);                //stosowanie typów z klasy enum odbywa sie poprzez       NazwaKlasy::typ
	AlfaRomeo.annualService();


}
int main()
{
	//zadMyClassShape();
	//zadAccount();
	//zadStudent();
	//zadCar();
}