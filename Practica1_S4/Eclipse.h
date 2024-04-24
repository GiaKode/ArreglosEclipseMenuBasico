#pragma once
#include<iostream>
using namespace std;

class Eclipse
{
private:
	string tipoEclipse;
	string fecha;
	int hora;
	bool Sismo;
	bool Lluvias;
	string Visibilidad;

public:
	Eclipse() {
		tipoEclipse = "solar";
		fecha = "12/02/22";
		hora = 100;
		Sismo = 1;
		Lluvias = 1;
		Visibilidad = "Europa";

	}
	
	~Eclipse(){}
	//get
	string GETtipoeclipse() {
		return tipoEclipse;
	}

	string GETfecha() {
		return fecha;
	}

	int GEThora() {
		return hora;
	}

	bool GETsismo() {
		return Sismo;
	}

	bool GETlluvias() {
		return Lluvias;
	}

	string GETvisibilidad() {
		return Visibilidad;
	}

	//set

	void SETtipoeclipse(string v) {
		this->tipoEclipse = v;
	}
	void SETfecha(string v) {
		this->fecha = v;
	}
	void SEThora(int v) {
		this->hora = v;
	}
	void SETsismo(bool v) {
		this->Sismo = v;
	}
	void SETlluvias(bool v) {
		this->Lluvias = v;
	}
	void SETvisibilidad(string v) {
		this->Visibilidad = v;
	}



};

