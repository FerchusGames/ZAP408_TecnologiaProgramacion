// ZAP408_TecnologíaProgramación.cpp : Este es el proyecto que estaremos usando durante toda el semestre.

// Este programa cuenta el número de vocales que tiene con punteros.

#include <iostream>
#include <string>

int main()
{
	std::string palabra;
	std::string* palabraPtr = &palabra;
	char vocales[10] = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
	int numVocales = 0;
	int* numVocalesPtr = &numVocales;

	std::cin >> *palabraPtr;
	for (int i = 0; i < palabra.length(); i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (palabra[i] == vocales[j])
			{
				*numVocalesPtr = *numVocalesPtr + 1;
			}
		}
	}

	std::cout << "The number of vowels is: " << numVocales;
}