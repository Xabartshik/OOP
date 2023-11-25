#pragma once

#include <iostream>
#include <string>
using namespace std;


class bomb
{
protected:
	//Имя бомбы
	string bombName;
	//Масса бомбы
	double weightBomb;
	//Вес взрывчатого вещества
	double explosiveWeight;
	//Тип бомбы
	string bombType;
	//Тип крепления
	string attachementType;

public:
	// Возвращает массу бомбы
	double getBombWeight()const;
	// Устанавливает вес бомбы
	void setBombWeight(double newWeight);
	// Возвращает вес взрывчатки
	double getExplosiveWeight()const;
	// Устанавливает вес взрывчатки
	void setExplosiveWeight(double newExplosive);
	// Возвращает тип бомбы
	string getBombType()const;
	// Устанавливает вид взрывчатки
	void setBombType(string newType);

	// Возвращает тип крепления бомбы
	string getAttachementType() const;
	// Устанавливает тип крепления бомбы
	void setAttachementType(string newAttachement);
	// Возвращает название бомбы
	string getBombName() const;
	// Установить новое название бомбы
	void setBombName(string newName);
};

