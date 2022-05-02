#include "BinarySearch.h"

void binarySearch(int arr[])
{
	int intBuscar, inf = 0, sup = (arrSize - 1), mitad;
	system("CLS");
	std::cout << "Escriba el entero que quiere buscar: ";
	std::cin >> intBuscar;
	std::cout << std::endl;
	while (inf <= sup)
	{
		mitad = (inf + sup) / 2;
		if (arr[mitad] == intBuscar)
		{
			std::cout << "El número proporcionado se encuentra en el índice [" << mitad << "] del arreglo." << std::endl << std::endl;
			break;
		}
		if (arr[mitad] > intBuscar)
		{
			sup = mitad - 1;
			mitad = (inf + sup) / 2;
		}
		if (arr[mitad] < intBuscar)
		{
			inf = mitad + 1;
			mitad = (inf + sup) / 2;
		}
	}

	if (arr[mitad] != intBuscar) std::cout << "No existe ese número dentro del arreglo o no está ordenado." << std::endl << std::endl;

	std::cout << "Presiona enter para volver al menu.";
	std::cin.ignore();
	std::cin.get();
	menu(arr);
}