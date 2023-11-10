#include "BusinessPlanesDescription.h"

//������ ����������� � �����������
BusinessPlanesDescription::BusinessPlanesDescription(const string& newID, const string& newPlaneType, double newMaxSpeed, double newMaxHeight,
	double newMaxDistance, double newTakeoffWeight, double newMaxWeight, unsigned short newCrew, unsigned short newEngineNumber,
	const string& newEngineType, double newEnginePower, unsigned short newCapacity) : PlanesDescription(newID, newPlaneType, newMaxSpeed, newMaxHeight, newMaxDistance, newTakeoffWeight, newMaxWeight, newCrew,
		newEngineNumber, newEngineType, newEnginePower)
{
	setHumanCapacity(newCapacity);
}



//����������� ������
BusinessPlanesDescription::BusinessPlanesDescription() {
	setHumanCapacity(0);
};
//����������� � �����������
BusinessPlanesDescription::BusinessPlanesDescription(unsigned short newCapacity) {
	setHumanCapacity(newCapacity);
};


//������ ��� �������������������
void BusinessPlanesDescription::setHumanCapacity(unsigned short newCapacity)
{
	humanCapacity = newCapacity;
}


//������ ��� �������������������
unsigned short BusinessPlanesDescription::getHumanCapacity() const
{
	return humanCapacity;
}

