#include <string>
#include <iostream>

#include "bomb.h"


// Возвращает массу бомбы
double bomb::getBombWeight() const
{
	return weightBomb;
}


// Устанавливает вес бомбы
void bomb::setBombWeight(double newWeight)
{
	weightBomb = newWeight;
}


// Возвращает вес взрывчатки
double bomb::getExplosiveWeight() const
{
	return explosiveWeight;
}


// Устанавливает вес взрывчатки
void bomb::setExplosiveWeight(double newExplosive)
{
	explosiveWeight = newExplosive;
}


// Возвращает тип бомбы
string bomb::getBombType() const
{
	// TODO: Добавьте сюда код реализации.
	return bombType;
}


// Устанавливает вид взрывчатки
void bomb::setBombType(string newType)
{
	bombType = newType;
}


// Возвращает тип крепления бомбы
string bomb::getAttachementType() const
{
	// TODO: Добавьте сюда код реализации.
	return attachementType;
}


// Устанавливает тип крепления бомбы
void bomb::setAttachementType(string newAttachement)
{
	attachementType = newAttachement; 
}


// Возвращает название бомбы
string bomb::getBombName() const
{

	return bombName;
}


// Установить новое название бомбы
void bomb::setBombName(string newName)
{
	bombName = newName;
}
