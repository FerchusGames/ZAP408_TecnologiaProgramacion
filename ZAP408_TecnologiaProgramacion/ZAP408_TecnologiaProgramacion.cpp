// ZAP408_TecnologíaProgramación.cpp : Este es el proyecto que estaremos usando durante toda el semestre.

#include <iostream>
#include <string>
#include <numbers>

// Figura

class Figura
{
public:
	Figura(int, std::string);
	virtual void Area();
	virtual void Perimetro();

private:
	int numeroLados;
	std::string color;
};

Figura::Figura(int _numeroLados, std::string _color)
{
	numeroLados = _numeroLados;
	color = _color;
}

// Cuadrado

class Cuadrado : public Figura
{
public:
	Cuadrado(int, std::string, double, double);
	void Area();
	void Perimetro();

private:
	double base;
	double altura;
};

Cuadrado::Cuadrado(int _numeroLados, std::string _color, double _base, double _altura)
{
	base = _base;
	altura = _altura;
}

void Cuadrado::Area()
{
	double resultado = base * altura;
	std::cout << "El area del cuadrado es: " << resultado << "cm^2" << std::endl;
}

void Cuadrado::Perimetro()
{
	double resultado = base * 4;
	std::cout << "El perimetro del cuadrado es: " << resultado << "cm" << std::endl;
}

// Triangulo

class Triangulo : public Figura
{
public:
	Triangulo(int, std::string, double, double, double, double);
	void Area();
	void Perimetro();

private:
	double catetoOpuesto;
	double catetoAdyacente;
	double hipotenusa;
	double altura;
};

Triangulo::Triangulo(int _numeroLados, std::string _color, double _catetoOpuesto, double _catetoAdyacente, double _hipotenusa, double _altura)
{
	catetoOpuesto = _catetoOpuesto;
	catetoAdyacente = _catetoAdyacente;
	hipotenusa = _hipotenusa;
	altura = _altura;
}

void Triangulo::Area()
{
	double result = catetoAdyacente * altura / 2;
	std::cout << "El area del triangulo es: " << result << std::endl;
}

void Triangulo::Perimetro()
{
	double result = catetoOpuesto + catetoAdyacente + hipotenusa;
	std::cout << "El perimetro del triangulo es: " << result << std::endl;
}


// Circulo

class Circulo : public Figura
{
public:
	Circulo(int, std::string, double);
	void Area();
	void Perimetro();

private:
	double radio;
};

Circulo::Circulo(int _numeroLados, std::string _color, double _radio)
{
	radio = _radio;
}

void Circulo::Area()
{
	const double pi = 3.141592653589793238463;
}

int main()
{

}
