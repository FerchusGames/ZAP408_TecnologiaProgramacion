// ZAP408_Encapsulamiento_y_Herencia.cpp : Esta vez, haremos clases con herencia para entender estos dos pilares de la POO.

#include <string>
#include <iostream>

class Ropa
{
public:
	float precio;
	int nivelSwag;
	std::string materiales[5];
	std::string parteDelCuerpo;
	std::string nombre;
	std::string talla;
	std::string color;
	bool antiBalas;
	bool impermeable;

	void Presumir(std::string a) //Para presumirle a los demás de tu facha
	{
		std::cout << "*Le presume " << a << " *" << std::endl;
	}

private:

};

class Playera:public Ropa //Es una clase derivada de Ropa
{
public:
	bool mangas;
	bool estampado;
	bool requiereBaterias;
};

int main()
{
	Playera fiestasDeOctubre;
	fiestasDeOctubre.requiereBaterias = true;
	fiestasDeOctubre.estampado = true;
	fiestasDeOctubre.mangas = true;
	fiestasDeOctubre.precio = 50.00f;
	fiestasDeOctubre.nivelSwag = 11;
	fiestasDeOctubre.materiales[0] = "Algodón";
	fiestasDeOctubre.materiales[1] = "Litio";
	fiestasDeOctubre.materiales[2] = "Mucho amor";
	fiestasDeOctubre.parteDelCuerpo = "Torso";
	fiestasDeOctubre.nombre = "Playera con lucecitas watchinango";
	fiestasDeOctubre.talla = "XXL";
	fiestasDeOctubre.color = "Cafe";
	fiestasDeOctubre.antiBalas = false;
	fiestasDeOctubre.impermeable = false;

	fiestasDeOctubre.Presumir(fiestasDeOctubre.nombre);

	return 0;
}

