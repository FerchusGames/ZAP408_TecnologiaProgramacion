// ZAP408_TecnologíaProgramación.cpp : Este es el proyecto que estaremos usando durante toda el semestre.

// Este programa cuenta el número de vocales que tiene con punteros.

#include <iostream>
#include <string>

int main()
{
	
	std::string palabra;
	char vocales[5] = { 'a', 'e', 'i', 'o', 'u' };
	std::string* palabraPtr = &palabra;
	

	std::cin >> palabra;
	std::cout << "Memory Adress:" << palabraPtr << std::endl;
	std::cout << "Data: " << *palabraPtr << std::endl;
	std::cout << "Memory Adress:" << vocalesPtr << std::endl;

	std::cout << *vocalesPtr[4] << std::endl;


	for (int i = 0; i < 5; i++) 
	{
		std::cout << *vocalesPtr[i] << std::endl;
	}
	
}