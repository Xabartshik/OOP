#pragma once
#include "ClassAdd.h"
#include <string>
using namespace std;
class WarPlanesDescription : public PlanesDescription
{
private:
    // Тип крепления бомб
    string bombAttachmentType;
    // Максимальная бомбовая нагрузка
    unsigned int maxBombLoad; 
    // Типы бомб
    string bombTypes; 
    // Максимальное количество бомб
    unsigned int maxBombCount; 


public:

    //Конструктор пустой
    WarPlanesDescription();

    //Конструктор с параметрами
    WarPlanesDescription(string attachmentType, unsigned int maxLoad, string types, unsigned int maxCount);



    //Конструктор копирования :
    WarPlanesDescription(const WarPlanesDescription& other);
    // Оператор присваивания копированием
    WarPlanesDescription& operator=(const WarPlanesDescription& other);
    // Конструктор перемещения
    WarPlanesDescription(WarPlanesDescription&& other);
    // Оператор присваивания перемещением
    WarPlanesDescription& operator=(WarPlanesDescription&& other);
    //Очищение полей
    void clear();
    // Сеттер для типа крепления бомб
    void setBombAttachmentType(const string& attachmentType);

    // Геттер для типа крепления бомб
    const string& getBombAttachmentType() const;

    // Сеттер для максимальной бомбовой нагрузки
    void setMaxBombLoad(unsigned int maxBombLoad);

    // Геттер для максимальной бомбовой нагрузки
    unsigned int getMaxBombLoad() const;

    // Сеттер для типов бомб
    void setBombTypes(const string& bombTypes);

    // Геттер для типов бомб
    const string& getBombTypes() const;

    // Сеттер для максимального количества бомб
    void setMaxBombCount(unsigned int maxBombCount);
    // Геттер для максимального количества бомб
    unsigned int getMaxBombCount() const;

    // Метод для получения всех полей класса в виде строки
    string toStringBomber() const;
};

