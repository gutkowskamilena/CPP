#pragma once
#include <string>
enum class EngineType{diesel, petrol};        //enum który ma dwa typy

class Car
{
	class Engine
	{
		double size;
		EngineType engineType;               //obiekt klasy EngineType
		static int count;
		static const std::string localization;
		static std::string year;
	public:
		
		Engine();
	
		static std::string generateVIN(Engine engine);
		void changeOil();
		void setEngineType(EngineType engineType);           //metoda któr¹ ustawiamy typ silnika, przyjmuje typy z enum class EngineType
		void setSize(double size);
		int getCount();
		std::string getYear() const;

		std::string getLocatlization() const;
	};
	std::string vin;
	Engine engine;
	
public:
	
	Car(EngineType myType, double size);
	
	void annualService();
	std::string getVIN();
	
};
