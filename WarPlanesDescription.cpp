// Сеттер для типа крепления бомб
#include <string>
#include "WarPlanesDescription.h"
///Ошлаков Данил, ИВТ-22
//Крутой конструктор с параметрами
WarPlanesDescription::WarPlanesDescription(const string& newID, const string& newPlaneType, double newMaxSpeed, double newMaxHeight,
    double newMaxDistance, double newTakeoffWeight, double newMaxWeight, unsigned short newCrew, unsigned short newEngineNumber,
    const string& newEngineType, double newEnginePower, const string& newBombAttachmentType,
    unsigned int newMaxBombLoad, const string& newBombTypes, unsigned int newMaxBombCount) :
    PlanesDescription(newID, newPlaneType, newMaxSpeed, newMaxHeight, newMaxDistance, newTakeoffWeight, newMaxWeight, newCrew,
        newEngineNumber, newEngineType, newEnginePower)
{
    setBombAttachmentType(newBombAttachmentType);
    setMaxBombLoad(newMaxBombLoad);
    setBombTypes(newBombTypes);
    setMaxBombCount(newMaxBombCount);
}



//Конструктор пустой
WarPlanesDescription::WarPlanesDescription() {
    setBombAttachmentType("");
    setMaxBombLoad(0);
    setBombTypes("");
    setMaxBombCount(0);
};

//Конструктор копирования :
WarPlanesDescription::WarPlanesDescription(const WarPlanesDescription& other) {
    bombAttachmentType = other.bombAttachmentType;
    maxBombLoad = other.maxBombLoad;
    bombTypes = other.bombTypes;
    maxBombCount = other.maxBombCount;
}
// Оператор присваивания копированием
WarPlanesDescription& WarPlanesDescription::operator=(const WarPlanesDescription& other) {
    if (this != &other) {
        bombAttachmentType = other.bombAttachmentType;
        maxBombLoad = other.maxBombLoad;
        bombTypes = other.bombTypes;
        maxBombCount = other.maxBombCount;
    }
    return *this;
}
// Конструктор перемещения
WarPlanesDescription::WarPlanesDescription(WarPlanesDescription&& other)
{
    bombAttachmentType = move(other.bombAttachmentType);
    maxBombLoad = other.maxBombLoad;
    bombTypes = move(other.bombTypes);
    maxBombCount = other.maxBombCount;

    other.clear();

}
// Оператор присваивания перемещением

WarPlanesDescription& WarPlanesDescription::operator=(WarPlanesDescription&& other) {
if (this != &other) {
    bombAttachmentType = move(other.bombAttachmentType);
    maxBombLoad = other.maxBombLoad;
    bombTypes = move(other.bombTypes);
    maxBombCount = other.maxBombCount;

    other.clear();
    }
return *this;
}


//Конструктор с параметрами
WarPlanesDescription::WarPlanesDescription(string attachmentType, unsigned int maxLoad, string types, unsigned int maxCount) {
    setBombAttachmentType(attachmentType);
    setMaxBombLoad(maxLoad);
    setBombTypes(types);
    setMaxBombCount(maxCount);
}
//Очищает значения полей
void WarPlanesDescription::clear()
{
    setBombAttachmentType("");
    setMaxBombLoad(0);
    setBombTypes("");
    setMaxBombCount(0);
}
void WarPlanesDescription::setBombAttachmentType(const string& attachmentType) {
    bombAttachmentType = attachmentType;
}

// Геттер для типа крепления бомб
const string& WarPlanesDescription::getBombAttachmentType() const {
    return bombAttachmentType;
}

// Сеттер для максимальной бомбовой нагрузки
void WarPlanesDescription::setMaxBombLoad(unsigned int newMaxBombLoad) {
    maxBombLoad = newMaxBombLoad;
}

// Геттер для максимальной бомбовой нагрузки
unsigned int WarPlanesDescription::getMaxBombLoad() const {
    return maxBombLoad;
}

// Сеттер для типов бомб
void WarPlanesDescription::setBombTypes(const string& newBombTypes) {
    bombTypes = newBombTypes;
}

// Геттер для типов бомб
const string& WarPlanesDescription::getBombTypes() const {
    return bombTypes;
}

// Сеттер для максимального количества бомб
void WarPlanesDescription::setMaxBombCount(unsigned int newMaxBombCount) {
    maxBombCount = newMaxBombCount;
}

// Геттер для максимального количества бомб
unsigned int WarPlanesDescription::getMaxBombCount() const {
    return maxBombCount;
}
// Метод для получения всех полей класса в виде строки
string WarPlanesDescription::toStringBomber() const {
    std::string result;

    result += "Тип крепления бомб: " + bombAttachmentType + "; ";
    result += "Максимальная бомбовая нагрузка: " + to_string(maxBombLoad) + "; ";
    result += "Типы бомб: " + bombTypes + "; ";
    result += "Максимальное количество бомб: " + to_string(maxBombCount) + "; ";

    return result;
}