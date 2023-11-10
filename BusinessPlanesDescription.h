#pragma once
#include "ClassAdd.h"
class BusinessPlanesDescription : public PlanesDescription
{
private:
	unsigned short humanCapacity;

	BusinessPlanesDescription();
	BusinessPlanesDescription(const string& newID, const string& newPlaneType, double newMaxSpeed, double newMaxHeight,
		double newMaxDistance, double newTakeoffWeight, double newMaxWeight, unsigned short newCrew, unsigned short newEngineNumber,
		const string& newEngineType, double newEnginePower, unsigned short newCapacity);
	//����������� � �����������
	BusinessPlanesDescription(unsigned short newCapacity);




public:
	//������ ��� �������������������
	void setHumanCapacity(unsigned short newCapacity);



	//������ ��� �������������������
	unsigned short getHumanCapacity() const;



};

