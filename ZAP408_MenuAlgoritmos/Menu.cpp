#include "Menu.h"

int menu(int arr[])
{
	int select;

	system("CLS");
	std::cout << "¡Bienvenido a mi programa! Puedes realizar cualquiera de las siguientes opciones ingresando el número correspondiente y presionando ENTER:" << std::endl << std::endl;

	std::cout << "1. Llenar el arreglo" << std::endl;
	std::cout << "2. Mostrar el arreglo" << std::endl;
	std::cout << "3. Ordenar el arreglo" << std::endl;
	std::cout << "4. Búsqueda binaria" << std::endl;
	std::cout << "5. Salir del programa" << std::endl;
	std::cout << std::endl;
	std::cin >> select;

	switch (select)
	{
		case 1: 
			llenarArreglo(arr);
			break;

		case 2:
			mostrarArreglo(arr);
			break;

		case 3: 
			ordenar(arr);
			break;

		case 4:
			binarySearch(arr);
			break;

		case 5:
			return 0;

		default:
			system("CLS");
			std::cout << "Número inválido. Presione enter para volver a intentar." << std::endl;
			std::cin.ignore();
			std::cin.get();
			menu(arr);
	}
}

void llenarArreglo(int arr[])
{
	system("CLS");
	for (int i = 0; i < arrSize; i++)
	{
		std::cout << "arr[" << i << "]: ";
		std::cin >> arr[i];
		std::cout << std::endl;
	}

	menu(arr);
}

void mostrarArreglo(int arr[])
{
	system("CLS");
	for (int i = 0; i < arrSize; i++)
	{
		std::cout << arr[i] << " ";
	}
	
	std::cout << std::endl << std::endl << "Presione ENTER para volver al menú" << std::endl;
	std::cin.ignore();
	std::cin.get();
	menu(arr);
}

void ordenar(int arr[])
{
	int select;

	system("CLS");
	std::cout << "Elige el método de ordenamiento que deseas utilizar: " << std::endl << std::endl;

	std::cout << "1. Bubble Sort" << std::endl;
	std::cout << "2. Heap Sort" << std::endl;
	std::cout << "3. Insertion Sort" << std::endl;
	std::cout << "4. Merge Sort" << std::endl;
	std::cout << "5. Quick Sort" << std::endl;
	std::cout << std::endl;
	std::cin >> select;

	switch (select)
	{
		case 1:
			bubbleSort(arr);
			break;
			
		case 2: 
			heapSort(arr, arrSize);
			system("CLS");
			std::cout << "Tu arreglo ha sido ordenado con Heap Sort." << std::endl << std::endl; 
			std::cout << "Presiona ENTER para volver al menú.";
			std::cin.ignore();
			std::cin.get();
			menu(arr);
			break;

		case 3: 
			insertionSort(arr);
			break;

		case 4: 
			mergeSort(arr, 0, arrSize - 1);
			system("CLS");
			std::cout << "Tu arreglo ha sido ordenado con Merge Sort." << std::endl << std::endl;
			std::cout << "Presiona ENTER para volver al menú.";
			std::cin.ignore();
			std::cin.get();
			menu(arr);
			break;

		case 5: 
			quickSort(arr, 0, arrSize - 1);
			system("CLS");
			std::cout << "Tu arreglo ha sido ordenado con Quick Sort." << std::endl << std::endl;
			std::cout << "Presiona ENTER para volver al menú.";
			std::cin.ignore();
			std::cin.get();
			menu(arr);
			break;

		default:
			system("CLS");
			std::cout << "Número inválido. Presione enter para volver a intentar." << std::endl;
			std::cin.ignore();
			std::cin.get();
			ordenar(arr);
	}
}

