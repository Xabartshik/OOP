#pragma once
#include <string>
using namespace std;
///Ошлаков Данил, ИВТ-22

class PlanesDescription {
private:
	///Регистрационный номер самолета
	string ID;
	///Название самолета(типа марки или бренда)
	string planeType;
	///Максимальная скорость самолета (при стандартной загрузке)
	double maxSpeed;
	///Максимальная высота полета самолета (при стандартной загрузке)
	unsigned maxHeight;
	///Максимальная дальность полета самолета (при стандартной загрузке)
	unsigned maxDistance;
	///Взлетная масса самолета
	unsigned takeoffWeight;
	//Экипаж самолета
	unsigned short crew;
	///Максимальная загрузка самолета 
	unsigned maxWeight;
    ///Мощность мотора
    double enginePower;
    ///Тип мотора
    string engineType;
    ///Число двигателей
    unsigned short engineNumber;



public:

    /// Пустой конструктор
    PlanesDescription();

    /// Конструктор с параметрами
    PlanesDescription(const string& newID, const string& newPlaneType, double newMaxSpeed, double newMaxHeight,
        double newMaxDistance, double newTakeoffWeight, double newMaxWeight, unsigned short newCrew, unsigned short newEngineNumber,
        const string& newEngineType, double newEnginePower);
    //Конструктор копирования :
    PlanesDescription(const PlanesDescription& other);
    // Оператор присваивания копированием
    PlanesDescription& operator=(const PlanesDescription& other);
    // Конструктор перемещения
    PlanesDescription(PlanesDescription&& other);
    // Оператор присваивания перемещением
    PlanesDescription& operator=(PlanesDescription&& other);


    //Очищение полей
    void clear();
    // Геттер для регистрационного номера самолета
    string getID() const;
    // Сеттер для регистрационного номера самолета
    void setID(const string& newID);

    // Геттер для названия самолета
    string getPlaneType() const;
    // Сеттер для названия самолета
    void setPlaneType(const string& newPlaneType);

    // Геттер для максимальной скорости самолета
    double getMaxSpeed() const;
    // Сеттер для максимальной скорости самолета
    void setMaxSpeed(double newMaxSpeed);

    // Геттер для максимальной высоты полета самолета
    unsigned getMaxHeight() const;
    // Сеттер для максимальной высоты полета самолета
    void setMaxHeight(unsigned newMaxHeight);

    // Геттер для максимальной дальности полета самолета
    unsigned getMaxDistance() const;
    // Сеттер для максимальной дальности полета самолета
    void setMaxDistance(unsigned newMaxDistance);

    // Геттер для взлетной массы самолета
    unsigned getTakeoffWeight() const;
    // Сеттер для взлетной массы самолета
    void setTakeoffWeight(unsigned newTakeoffWeight);

    // Геттер для количества членов экипажа
    unsigned short getCrew() const;
    // Сеттер для количества членов экипажа
    void setCrew(unsigned short newCrew);

    // Геттер для максимальной загрузки самолета
    unsigned getMaxWeight() const;
    // Сеттер для максимальной загрузки самолета
    void setMaxWeight(unsigned newMaxWeight);

    // Сеттер для мощности мотора
    void setEnginePower(double power);
    // Геттер для мощности мотора
    double getEnginePower() const;

    // Сеттер для типа мотора
    void setEngineType(const string& type);
    // Геттер для типа мотора
    const string& getEngineType() const;

    // Сеттер для числа двигателей
    void setEngineNumber(unsigned short newEngineNumber);
    // Геттер для числа двигателей
    unsigned short getEngineNumber() const;

    // Метод для получения всех полей класса в виде строки
    string toStringPlane();
};

