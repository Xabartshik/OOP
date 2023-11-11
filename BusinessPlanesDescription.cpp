#include "BusinessPlanesDescription.h"

//Крутой конструктор с параметрами
BusinessPlanesDescription::BusinessPlanesDescription(const string& newID, const string& newPlaneType, double newMaxSpeed, double newMaxHeight,
	double newMaxDistance, double newTakeoffWeight, double newMaxWeight, unsigned short newCrew, unsigned short newEngineNumber,
	const string& newEngineType, double newEnginePower, unsigned short newCapacity) : PlanesDescription(newID, newPlaneType, newMaxSpeed, newMaxHeight, newMaxDistance, newTakeoffWeight, newMaxWeight, newCrew,
		newEngineNumber, newEngineType, newEnginePower)
{
	setHumanCapacity(newCapacity);
}



//Конструктор пустой
BusinessPlanesDescription::BusinessPlanesDescription() {
	setHumanCapacity(0);
};
//Конструктор с параметрами
BusinessPlanesDescription::BusinessPlanesDescription(unsigned short newCapacity) {
	setHumanCapacity(newCapacity);
};


//Сеттер для человековместимости
void BusinessPlanesDescription::setHumanCapacity(unsigned short newCapacity)
{
	humanCapacity = newCapacity;
}


//Геттер для человековместимости
unsigned short BusinessPlanesDescription::getHumanCapacity() const
{
	return humanCapacity;
}

