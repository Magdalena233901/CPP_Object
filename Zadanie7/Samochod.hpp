#pragma once


enum class EngineType { Diesel, Petrol };


class Car
{
	class Engine
	{
		int size;
		EngineType engineType;
	public:
		void oilChange();
		void setEngineType(EngineType engineType);
	};
	Engine engine;
public:
	Car(EngineType engineType);

	void annualService();
	void oilChange();
};
