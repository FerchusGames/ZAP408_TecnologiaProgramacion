// ZAP408_TecnologíaProgramación.cpp : Este es el proyecto que estaremos usando durante toda el semestre.

// Este programa cuenta el número de vocales que tiene con punteros.

#include <iostream>
#include <string>

int main()
{
	std::string palabra;
	std::string* palabraPtr = &palabra; // Hacemos un puntero que obtenga la dirección de palabra
	char vocales[10] = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'}; // La lista de vocales a comparar
	int numVocales = 0; 
	int* numVocalesPtr = &numVocales; // El puntero obtiene la dirección del número de vocales

	std::cout << "This program will count the vowels in whatever you write." << std::endl;
	std::cout << "Please insert whatever you want to: ";
	std::cin >> *palabraPtr; // Al poner el asterisco le decimos que introduzca el dato dentro del espacio de memoria, no que cambie la dirección

	for (int i = 0; i < palabra.length(); i++) // Este bucle pasa por todas las letras de la palabra
	{
		for (int j = 0; j < 10; j++) // Este bucle pasa por todas las vocales
		{
			if (palabra[i] == vocales[j]) // Compara las vocales con cada letra de la palabra
			{
				*numVocalesPtr = *numVocalesPtr + 1; // Le agrega uno al contador cuando encuentra una similitud
			}
		}
	}

	std::cout << std::endl << "The number of vowels is: " << numVocales; // Muestra el número de vocales
}