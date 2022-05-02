#include "BubbleSort.h"

void bubbleSort(int arr[])
{
	int temp;

	for (int i = 1; i < arrSize; i++)
		for (int j = arrSize - 1; j >= i; j--)
			if (arr[j - 1] > arr[j])
			{
				swap(arr, j - 1, j);
			}

	system("CLS");
	std::cout << "El arreglo ha sido ordenando usando Bubble Sort." << std::endl << std::endl;
	std::cout << "Presione ENTER para volver al menú." << std::endl << std::endl;
	std::cin.ignore();
	std::cin.get();
	menu(arr);
}