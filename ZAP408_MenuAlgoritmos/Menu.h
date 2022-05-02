#pragma once

//Algoritmos de ordenamiento
#include "BubbleSort.h"
#include "HeapSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include "QuickSort.h"

//Algoritmos de búsqueda
#include "BinarySearch.h"

#include <Windows.h>
#include <iostream>
#include <stdlib.h>

int menu(int arr[]);
void llenarArreglo(int arr[]);
void mostrarArreglo(int arr[]);
void ordenar(int arr[]);
