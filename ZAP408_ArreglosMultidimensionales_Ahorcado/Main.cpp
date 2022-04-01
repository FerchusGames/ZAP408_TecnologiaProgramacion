// ZAP408_ArreglosMultidimensionales_Ahoracado:  Haremos un juego de ahorcado en el que el usuario tenga que ingresar letras para descubrir una palabra.

#include <iostream>
#include <string>
#include <locale> // Para poner la aplicación en español
#include <ctime> // Nos permite generar una semilla dependiendo del tiempo en el que se corra la línea de código para que aleatorio
#include <windows.h> // Para limpiar la consola

int main()
{
	setlocale(LC_ALL, "spanish");

	srand(time(NULL)); // Inicializa la semilla de acuerdo al tiempo actual

	std::string palabras[5];

	palabras[0] = "QUESO";
	palabras[1] = "COMPU";
	palabras[2] = "RELOJ";
	palabras[3] = "COCHE";
	palabras[4] = "LLAVE";

	int palabraElegida = rand() % 5;


	//Iniciamos los valores que determinaran las condiciones de victoria y derrota
	int fallos = 0; 
	int aciertos = 0;

	int fallosParaPerder = 8; // Cambiar para balancear

	std::string palabraDescubierta = "?????"; 

	//Presentación del juego
	std::cout << "¡Bienvenido al juego de ahorcado!\nIngresa letra por letra y trata de descubrir la palabra secreta\n\nPresiona enter para empezar el juego";
	std::cin.get();

	// CODIGO PARA TESTEAR
		//std::cout << palabras[palabraElegida];
		//std::cin.get();

	do
	{
		char letraIngresada;
		bool letraInacertada = true;
		system("CLS");

		std::cout << "La palabra es: " << palabraDescubierta << std::endl << std::endl;
		std::cout << "Número de fallos: " << fallos << std::endl << std::endl;
		std::cout << "Ingresa una letra mayúscula: ";
		std::cin >> letraIngresada;
		for (int i = 0; i < 5; i++)
		{
			if (palabras[palabraElegida][i] == letraIngresada) // Cuando la letra acierta
			{
				letraInacertada = false; // Para que no lo cuente como fallo
				if (palabraDescubierta[i] == '?') // Evita que se sumen aciertos anteriores
				{
					aciertos++; 
					palabraDescubierta[i] = letraIngresada; // Revela la palabra 
				}
			}
		}
		if (letraInacertada)
		{
			fallos++;
		}
	} while (fallos < fallosParaPerder && aciertos < 5);

	system("CLS");

	if (aciertos >= 5)
	{
		std::cout << "Felicidades, ¡Haz ganado!" << std::endl << std::endl;
	}
	else std::cout << "Suerte para la próxima" << std::endl << std::endl;

	std::cout << "La palabra era: " << palabras[palabraElegida] << std::endl << std::endl;

	std::cout << "¡Gracias por jugar!";
}