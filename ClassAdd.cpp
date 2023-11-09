#include <string>
#include "ClassAdd.h"

using namespace std;
///Ошлаков Данил, ИВТ-22


    /// Пустой конструктор
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
/// Конструктор с параметрами
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

    //Конструктор копирования :
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

    // Оператор присваивания копированием
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

    // Конструктор перемещения
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

    // Оператор присваивания перемещением
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
    //Очищение полей
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

// Геттер для регистрационного номера самолета
string PlanesDescription::getID() const {
    return ID;
}

// Сеттер для регистрационного номера самолета
void PlanesDescription::setID(const string& newID) {
    ID = newID;
}

// Геттер для названия самолета
string PlanesDescription::getPlaneType() const {
    return planeType;
}

// Сеттер для названия самолета
void PlanesDescription::setPlaneType(const string& newPlaneType) {
    planeType = newPlaneType;
}

// Геттер для максимальной скорости самолета
double PlanesDescription::getMaxSpeed() const {
    return maxSpeed;
}

// Сеттер для максимальной скорости самолета
void PlanesDescription::setMaxSpeed(double newMaxSpeed) {
    if (newMaxSpeed < 0) {
        maxSpeed = 0;
    }
    else {
        maxSpeed = newMaxSpeed;
    }
}

// Геттер для максимальной высоты полета самолета
unsigned PlanesDescription::getMaxHeight() const {
    return maxHeight;
}

// Сеттер для максимальной высоты полета самолета
void PlanesDescription::setMaxHeight(unsigned newMaxHeight) {
    maxHeight = newMaxHeight;
}

// Геттер для максимальной дальности полета самолета
unsigned PlanesDescription::getMaxDistance() const {
    return maxDistance;
}

// Сеттер для максимальной дальности полета самолета
void PlanesDescription::setMaxDistance(unsigned newMaxDistance) {
    maxDistance = newMaxDistance;
}

// Геттер для взлетной массы самолета
unsigned PlanesDescription::getTakeoffWeight() const {
    return takeoffWeight;
}

// Сеттер для взлетной массы самолета
void PlanesDescription::setTakeoffWeight(unsigned newTakeoffWeight) {
    takeoffWeight = newTakeoffWeight;
}

// Геттер для количества членов экипажа
unsigned short PlanesDescription::getCrew() const {
    return crew;
}

// Сеттер для количества членов экипажа
void PlanesDescription::setCrew(unsigned short newCrew) {
    crew = newCrew;
}

// Геттер для максимальной загрузки самолета
unsigned PlanesDescription::getMaxWeight() const {
    return maxWeight;
}

// Сеттер для максимальной загрузки самолета
void PlanesDescription::setMaxWeight(unsigned newMaxWeight) {
    maxWeight = newMaxWeight;
}
// Сеттер для мощности мотора
void PlanesDescription::setEnginePower(double newEnginePower) {

    if (newEnginePower < 0) {
        enginePower = 0;
    }
    else {
        enginePower = newEnginePower;
    }
}

// Геттер для мощности мотора
double PlanesDescription::getEnginePower() const {
    return enginePower;
}

// Сеттер для типа мотора
void PlanesDescription::setEngineType(const string& newEngineType) {
    engineType = newEngineType;
}

// Геттер для типа мотора
const string& PlanesDescription::getEngineType() const {
    return engineType;
}

// Сеттер для числа двигателей
void PlanesDescription::setEngineNumber(unsigned short newEngineNumber) {
    engineNumber = newEngineNumber;
}

// Геттер для числа двигателей
unsigned short PlanesDescription::getEngineNumber() const {
    return engineNumber;
}
// Метод для получения всех полей класса в виде строки
string PlanesDescription::toStringPlane() {
    string info;

    info += "Регистрационный номер самолета: " + ID + "; ";
    info += "Название самолета: " + planeType + "; ";
    info += "Максимальная скорость самолета: " + to_string(maxSpeed) + "; ";
    info += "Максимальная высота полета самолета: " + to_string(maxHeight) + "; ";
    info += "Максимальная дальность полета самолета: " + to_string(maxDistance) + "; ";
    info += "Взлетная масса самолета: " + to_string(takeoffWeight) + "; ";
    info += "Экипаж самолета: " + to_string(crew) + "; ";
    info += "Максимальная загрузка самолета: " + to_string(maxWeight) + "; ";
    info += "Мощность мотора: " + to_string(enginePower) + "; ";
    info += "Тип мотора: " + engineType + "; ";
    info += "Число двигателей: " + to_string(engineNumber) + "; ";

    return info;
}

