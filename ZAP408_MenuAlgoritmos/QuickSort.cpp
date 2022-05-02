#include "QuickSort.h"

void quickSort(int arr[], int ini, int fin)
{
	if (ini < fin) // Caso base de recursividad
	{
		int pivote, izq, der;
		int temp = arr[ini]; // Para poder hacer el cambio de estructuras
		pivote = temp; // Número a comparar

		izq = ini;
		der = fin;

		while (izq < der) // Se repetirá hasta que los números se encuentren
		{
			while (der > izq && arr[der] > pivote) // Recorre de derecha a izquierda hasta encontrar un numero menor del lado derecho 
				der--;
			if (der > izq) // Checa que no se hayan cruzado
			{
				arr[izq] = arr[der];
				izq++;
			}

			while (izq < der && arr[izq] < pivote) // Recorre de derecha a izquierda hasta encontrar un numero mayor del lado izquierdo
				izq++;
			if (izq < der) // Checa que no se hayan cruzado
			{
				arr[der] = arr[izq];
				der--;
			}
		}

		arr[der] = temp; // Ponemos la estructura con el pivote en su posición correcta

		quickSort(arr, ini, der - 1);
		quickSort(arr, der + 1, fin);
	}
}