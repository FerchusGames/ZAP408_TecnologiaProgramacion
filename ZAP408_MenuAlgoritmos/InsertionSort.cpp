#include "InsertionSort.h"

void insertionSort(int arr[])
{
	system("CLS");

	for (int i = 1; i < arrSize; i++)
	{
		int j = i;
		while (j > 0 && arr[j] < arr[j - 1])
		{
			swap(arr, j - 1, j);
			j--;
		}
	}

	std::cout << "Tu arreglo ha sido ordenado con Insertion Sort." << std::endl << std::endl;
	std::cout << "Presiona ENTER para volver al menú.";
	std::cin.ignore();
	std::cin.get();
	menu(arr);
}