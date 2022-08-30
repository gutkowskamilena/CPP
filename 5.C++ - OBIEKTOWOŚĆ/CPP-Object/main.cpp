#include<iostream>
#include "MyClass.hpp"
#include "Shape.hpp"
#include "Account.hpp"
#include<string>
#include "Student.hpp"
#include "Car.hpp"
#include "Const.hpp"


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
	//Student first(4);
	//first.setName("Pawel");
	//first.setSurname("Kowal");
	//first.addGrade(2);
	//first.addGrade(3);
	//first.addGrade(4);
	//first.addGrade(5);
	//first.getName();
	//first.getSurname();
	//first.getStudentsGrades();
	//std::cout << "Srednia ocen: " << first.average();

	//KOMPOZYCJA
	//Student ma w³asny obiekt klasy adress, który przechowuje mu pola street i house number - 
	//obiekt klasy adress nale¿y tylko do niego i tylko on ma mo¿liwoœæ wprowadzania w tym obiekcie zmiany
	//  
	//Student studentKompozycja("Grójecka", 39);

	//--------------------------------------------------------------------------


	//AGREGACJA
	// Jan i Ala  maj¹ dostêp do tego samego adresu - obiekt wewnêtrzny adress jest wykorzystywany przez wiele obiektów klasy zewnêtrznej student
	// 1. Podejœcie:bez referencji - 
	// Ala i Jan korzystaj¹ z kopii obiektu klasy adress - ka¿de z nich ma swój egemplarz adresu z którym mo¿e coœ niezale¿nie robiæ(aby dzia³a³o w tym kodzie trzeba usun¹æ &)
	// 
	// 2. Podejœcie: z referencj¹ - 
	// Jan i Ala korzystaj¹ dok³adnie z tego zamego obiektu klasy adress, ka¿da edycja edycja zrobiona u jednego bedzie widoczna u drugiego studenta
	//Adress adress("Ksiazeca", 15);
	//Student JanNowak(adress);
	//Student AlaNowak(adress);

	//std::cout << JanNowak.getHouseNo() << std::endl;
	//std::cout << AlaNowak.getHouseNo() << std::endl;

	//adress.setHouseNo(150);

	//std::cout << JanNowak.getHouseNo() << std::endl;
	//std::cout << AlaNowak.getHouseNo() << std::endl;

	//---------------------------------------------------------------------------

	//ASOCJACJA
	//tworzymy obiek student z promotorem juz w konstruktorze, a promotorowi setujemy studenta

	
	Student Dionizy;    //po³¹czenie student->promotor
	{

		Promotor promotor(Dionizy);
		Dionizy.setPromotor(&promotor);     //po³¹czenie promotor->student. 
		//poniewa¿ w deklaracji funkcja ta przyjmuje wskaznik to tutaj musimy wprowadziæ adres obiektu promotor, który pobieramy za pomoc¹ & (wskaznik=adres w pamieci)
		Dionizy.sendEmailToPromotor();
		
	}
	Dionizy.sendEmailToPromotor();


	std::cout << "koniec";

}

void zadCar()
{
	Car AlfaRomeo(EngineType::petrol, 1.7);                //stosowanie typów z klasy enum odbywa sie poprzez       NazwaKlasy::typ
	AlfaRomeo.annualService();

	std::cout << AlfaRomeo.getVIN() << std::endl;


}

void zadConst()
{
	const LectureRoom roomA(15);
	LectureRoom roomB(30);
	//roomB = roomA;     //w te strone dziala
	//roomA = roomB;     //tutaj juz nie dziala bo do stalego obiektu chcemy przypisac niestaly obiekt
	//pol obiektu roomA tez nie da sie zmieniac

	std::cout << roomB.getSize() << std::endl;
	
}

int main()
{
	//zadMyClassShape();
	//zadAccount();
	zadStudent();
	//zadCar();
	//zadConst();
}