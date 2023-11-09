#include <string>
#include "ClassAdd.h"

using namespace std;
///������� �����, ���-22


    /// ������ �����������
PlanesDescription::PlanesDescription()
{
    setID("");
    setPlaneType("");
    setMaxSpeed(0);
    setMaxHeight(0);
    setMaxDistance(0);
    setTakeoffWeight(0);
    setMaxWeight(0);
    setCrew(0);
    setEngineNumber(0);
    setEngineType("");
    setEnginePower(0);

}
/// ����������� � �����������
    PlanesDescription::PlanesDescription(const string& newID, const string& newPlaneType, double newMaxSpeed, double newMaxHeight,
    double newMaxDistance, double newTakeoffWeight, double newMaxWeight, unsigned short newCrew, unsigned short newEngineNumber,
        const string& newEngineType, double newEnginePower)
    {
        setID(newID);
        setPlaneType(newPlaneType);
        setMaxSpeed(newMaxSpeed);
        setMaxHeight(newMaxHeight);
        setMaxDistance(newMaxDistance);
        setTakeoffWeight(newTakeoffWeight);
        setMaxWeight(newMaxWeight);
        setCrew(newCrew);
        setEngineNumber(newEngineNumber);
        setEngineType(newEngineType);
        setEnginePower(newEnginePower);
    }

    //����������� ����������� :
    PlanesDescription::PlanesDescription(const PlanesDescription& other) {
        ID = other.ID;
        planeType = other.planeType;
        maxSpeed = other.maxSpeed;
        maxHeight = other.maxHeight;
        maxDistance = other.maxDistance;
        takeoffWeight = other.takeoffWeight;
        crew = other.crew;
        maxWeight = other.maxWeight;
        enginePower = other.enginePower;
        engineType = other.engineType;
        engineNumber = other.engineNumber;


    }

    // �������� ������������ ������������
    PlanesDescription& PlanesDescription::operator=(const PlanesDescription& other) {
        if (this != &other) {
            ID = other.ID;
            planeType = other.planeType;
            maxSpeed = other.maxSpeed;
            maxHeight = other.maxHeight;
            maxDistance = other.maxDistance;
            takeoffWeight = other.takeoffWeight;
            crew = other.crew;
            maxWeight = other.maxWeight;
            enginePower = other.enginePower;
            engineType = other.engineType;
            engineNumber = other.engineNumber;
        }
        return *this;
    }

    // ����������� �����������
    PlanesDescription::PlanesDescription(PlanesDescription&& other)
    {
        ID = move(other.ID);
        planeType = move(other.planeType);
        maxSpeed = other.maxSpeed;
        maxHeight = other.maxHeight;
        maxDistance = other.maxDistance;
        takeoffWeight = other.takeoffWeight;
        crew = other.crew;
        maxWeight = other.maxWeight;
        enginePower = other.enginePower;
        engineType = move(other.engineType);
        engineNumber = other.engineNumber;

        other.clear();
    }

    // �������� ������������ ������������
    PlanesDescription& PlanesDescription::operator=(PlanesDescription&& other) {
        if (this != &other) {
            ID = move(other.ID);
            planeType = move(other.planeType);
            maxSpeed = other.maxSpeed;
            maxHeight = other.maxHeight;
            maxDistance = other.maxDistance;
            takeoffWeight = other.takeoffWeight;
            crew = other.crew;
            maxWeight = other.maxWeight;
            enginePower = other.enginePower;
            engineType = move(other.engineType);
            engineNumber = other.engineNumber;

            other.clear();
        }
        return *this;
    }
    //�������� �����
void PlanesDescription::clear()
{
    setID("");
    setPlaneType("");
    setMaxSpeed(0);
    setMaxHeight(0);
    setMaxDistance(0);
    setTakeoffWeight(0);
    setMaxWeight(0);
    setCrew(0);
    setEngineNumber(0);
    setEngineType("");
    setEnginePower(0);
}

// ������ ��� ���������������� ������ ��������
string PlanesDescription::getID() const {
    return ID;
}

// ������ ��� ���������������� ������ ��������
void PlanesDescription::setID(const string& newID) {
    ID = newID;
}

// ������ ��� �������� ��������
string PlanesDescription::getPlaneType() const {
    return planeType;
}

// ������ ��� �������� ��������
void PlanesDescription::setPlaneType(const string& newPlaneType) {
    planeType = newPlaneType;
}

// ������ ��� ������������ �������� ��������
double PlanesDescription::getMaxSpeed() const {
    return maxSpeed;
}

// ������ ��� ������������ �������� ��������
void PlanesDescription::setMaxSpeed(double newMaxSpeed) {
    if (newMaxSpeed < 0) {
        maxSpeed = 0;
    }
    else {
        maxSpeed = newMaxSpeed;
    }
}

// ������ ��� ������������ ������ ������ ��������
unsigned PlanesDescription::getMaxHeight() const {
    return maxHeight;
}

// ������ ��� ������������ ������ ������ ��������
void PlanesDescription::setMaxHeight(unsigned newMaxHeight) {
    maxHeight = newMaxHeight;
}

// ������ ��� ������������ ��������� ������ ��������
unsigned PlanesDescription::getMaxDistance() const {
    return maxDistance;
}

// ������ ��� ������������ ��������� ������ ��������
void PlanesDescription::setMaxDistance(unsigned newMaxDistance) {
    maxDistance = newMaxDistance;
}

// ������ ��� �������� ����� ��������
unsigned PlanesDescription::getTakeoffWeight() const {
    return takeoffWeight;
}

// ������ ��� �������� ����� ��������
void PlanesDescription::setTakeoffWeight(unsigned newTakeoffWeight) {
    takeoffWeight = newTakeoffWeight;
}

// ������ ��� ���������� ������ �������
unsigned short PlanesDescription::getCrew() const {
    return crew;
}

// ������ ��� ���������� ������ �������
void PlanesDescription::setCrew(unsigned short newCrew) {
    crew = newCrew;
}

// ������ ��� ������������ �������� ��������
unsigned PlanesDescription::getMaxWeight() const {
    return maxWeight;
}

// ������ ��� ������������ �������� ��������
void PlanesDescription::setMaxWeight(unsigned newMaxWeight) {
    maxWeight = newMaxWeight;
}
// ������ ��� �������� ������
void PlanesDescription::setEnginePower(double newEnginePower) {

    if (newEnginePower < 0) {
        enginePower = 0;
    }
    else {
        enginePower = newEnginePower;
    }
}

// ������ ��� �������� ������
double PlanesDescription::getEnginePower() const {
    return enginePower;
}

// ������ ��� ���� ������
void PlanesDescription::setEngineType(const string& newEngineType) {
    engineType = newEngineType;
}

// ������ ��� ���� ������
const string& PlanesDescription::getEngineType() const {
    return engineType;
}

// ������ ��� ����� ����������
void PlanesDescription::setEngineNumber(unsigned short newEngineNumber) {
    engineNumber = newEngineNumber;
}

// ������ ��� ����� ����������
unsigned short PlanesDescription::getEngineNumber() const {
    return engineNumber;
}
// ����� ��� ��������� ���� ����� ������ � ���� ������
string PlanesDescription::toStringPlane() {
    string info;

    info += "��������������� ����� ��������: " + ID + "; ";
    info += "�������� ��������: " + planeType + "; ";
    info += "������������ �������� ��������: " + to_string(maxSpeed) + "; ";
    info += "������������ ������ ������ ��������: " + to_string(maxHeight) + "; ";
    info += "������������ ��������� ������ ��������: " + to_string(maxDistance) + "; ";
    info += "�������� ����� ��������: " + to_string(takeoffWeight) + "; ";
    info += "������ ��������: " + to_string(crew) + "; ";
    info += "������������ �������� ��������: " + to_string(maxWeight) + "; ";
    info += "�������� ������: " + to_string(enginePower) + "; ";
    info += "��� ������: " + engineType + "; ";
    info += "����� ����������: " + to_string(engineNumber) + "; ";

    return info;
}

