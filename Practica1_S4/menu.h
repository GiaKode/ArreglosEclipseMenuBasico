#pragma once
#include<iostream>
using namespace std;
using namespace System;

int menu() {
	//Console::Clear();
	int digitos;
	do
	{
		cout << "\n----------------MENU--------------";
		cout << "\n1- Mostrar registro de las eclipses";
		cout << "\n2- Agregar una eclipses";
		cout << "\n3- Eliminar eclipse";
		cout << "\n4- Salir";
		cout << "\nIngresar opcion : ";
		cin >> digitos;

	} while (digitos>4||digitos<1);
	return digitos;
}