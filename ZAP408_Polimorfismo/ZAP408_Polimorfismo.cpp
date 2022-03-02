// ZAP408_Polimorfismo.cpp : En este programa haremos uso del polimorfismo para crear variaciones de nuestra clase principal.


#include <iostream>
#include <string>

class Ropa
{
public:
	Ropa(float, int, std::string, std::string, std::string, bool, bool);
	virtual void mostrar();

private:
	float precio;
	int nivelSwag;
	std::string nombre;
	std::string talla;
	std::string color;
	bool antiBalas;
	bool impermeable;
};

Ropa::Ropa(float _precio, int _nivelSwag, std::string _nombre, std::string _talla, std::string _color, bool _antiBalas, bool _impermeable)
{
	precio = _precio;
	nivelSwag = _nivelSwag;
	nombre = _nombre;
	talla = _talla;
	color = _color;
	antiBalas = _antiBalas;
	impermeable = _impermeable;
}

void Ropa::mostrar()
{
	std::cout << "Precio: " << precio << std::endl;
	std::cout << "Nivel de swag: " << nivelSwag << std::endl;
	std::cout << "Nombre: " << nombre << std::endl;
	std::cout << "Talla: " << talla << std::endl;
	std::cout << "Color: " << color << std::endl;

	if (antiBalas) std::cout << "Es antibalas" << std::endl;
	else std::cout << "No es antibalas" << std::endl;

	if (impermeable == false) std::cout << "Es impermeable" << std::endl;
	else std::cout << "No es impermeable" << std::endl;
}

class Playera : public Ropa
{
public:
	Playera(float, int, std::string, std::string, std::string, bool, bool, bool, bool, bool);
	void mostrar();

private:
	bool mangas;
	bool estampado;
	bool requiereBaterias;
};

Playera::Playera(float _precio, int _nivelSwag, std::string _nombre, std::string _talla, std::string _color, bool _antiBalas, bool _impermeable, bool _mangas, bool _estampado, bool _requiereBaterias) : Ropa(_precio, _nivelSwag, _nombre, _talla, _color, _antiBalas, _impermeable)
{
	mangas = _mangas;
	estampado = _estampado;
	requiereBaterias = _requiereBaterias;
}

void Playera::mostrar()
{
	Ropa::mostrar();

	if (mangas) std::cout << "Tiene mangas" << std::endl;
	else std::cout << "No tiene mangas" << std::endl;

	if (estampado) std::cout << "Tiene estampado" << std::endl;
	else std::cout << "No tiene estampado" << std::endl;
}

int main()
{
	Ropa* Arreglo[3];

	Arreglo[0] = new Playera(299.99f, 8, "Playera de osos", "M", "Verde", false, false, false, true, false);
	Arreglo[1] = new Playera(399.99f, 11, "Playera loca fiestas de octubre", "XL", "Negra", false, false, true, true, true);
	Arreglo[2] = new Playera(699.99f, 6, "Playera del ejército Nauruano", "S", "Gris", true, true, true, false, false);

	Arreglo[0]->mostrar();
	std::cout << std::endl;
	Arreglo[1]->mostrar();
	std::cout << std::endl;
	Arreglo[2]->mostrar();
}

