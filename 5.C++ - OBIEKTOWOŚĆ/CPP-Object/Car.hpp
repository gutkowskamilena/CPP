#pragma once
enum class EngineType{diesel, petrol};        //enum kt�ry ma dwa typy

class Car
{
	class Engine
	{
		int size;
		EngineType engineType;               //obiekt klasy EngineType
	public:
		void changeOil();
		void setEngineType(EngineType engineType);           //metoda kt�r� ustawiamy typ silnika, przyjmuje typy z enum class EngineType
	};

	Engine engine;
public:
	Car(EngineType myType);
	void annualService();
	
};
