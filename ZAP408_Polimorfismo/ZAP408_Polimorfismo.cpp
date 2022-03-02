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

	if (impermeable == false) std::cout << "Es impermeable";
	else std::cout << "No es impermeable" << std::endl;
}

class Playera : public Ropa
{
public:
	Playera(float, int, std::string, std::string, std::string, bool, bool, bool, bool, bool);

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

int main()
{

}

