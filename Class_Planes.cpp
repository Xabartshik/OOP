#include <iostream>
#include <vector>
#include <locale.h>
#include <windows.h>
#include "WarPlanesDescription.h"
#include "ClassAdd.h"
#include <cassert>
using namespace std;

int main()
{
	SetConsoleCP(1251);//Штука чинит кодировку
	SetConsoleOutputCP(1251);
	PlanesDescription account1;
	cout << account1.toStringPlane() << endl;
	return 0;
}
///Ошлаков Данил, ИВТ-22