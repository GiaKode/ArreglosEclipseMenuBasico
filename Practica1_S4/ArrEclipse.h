#pragma once

#include"Eclipse.h"
#include<iostream>
using namespace std;

class ArregloEclipse
{
private:
	Eclipse** arreglo;
	int tamañoArreglo;

public:
	//Puntos de partida o puntos iniciales:
	ArregloEclipse(void) {
		arreglo = nullptr;
		tamañoArreglo = 0;
	}
	~ArregloEclipse(){}

	void agregarEclipse(Eclipse* objeto) {
		//crear un arreglo temporal:
		Eclipse** auxiliar = new Eclipse * [tamañoArreglo + 1];
		//copia de los arreglos
		for (int i = 0; i < tamañoArreglo; i++)
		{
			auxiliar[i] = arreglo[i];
		}
		auxiliar[tamañoArreglo] = objeto;
		tamañoArreglo = tamañoArreglo + 1;
		if (arreglo != nullptr)delete arreglo;
		arreglo = auxiliar;
		
	}
	void mostrar() {
	
		if (arreglo != nullptr)
		{
			for (int i = 0; i < tamañoArreglo; i++)
			{
				cout << arreglo[i]->GETtipoeclipse() << "\t";
				cout << arreglo[i]->GETfecha() << "\t";
				cout << arreglo[i]->GEThora() << "\t";
				cout << arreglo[i]->GETsismo() << "\t";
				cout << arreglo[i]->GETlluvias() << "\t";
				cout << arreglo[i]->GETvisibilidad() << endl;


			}
		}
		else
			cout << "no hay nada";
			
		
		
	}

	void eliminar(int posicionAeliminar) {
		for (int i = 0; i < tamañoArreglo; i++)
		{
			if (i==posicionAeliminar)
			{
				for (int j = 0; j < tamañoArreglo-1; j++)
				{

				}
			}
		}
		tamañoArreglo--;
	}
	int GETtamañoArreglo() {
		return tamañoArreglo;
	}
	
};

