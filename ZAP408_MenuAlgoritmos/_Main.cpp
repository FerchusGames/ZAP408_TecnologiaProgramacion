#include <iostream>
#include <locale>
#include "Definitions.h"
#include "Menu.h"

int main()
{
	setlocale(LC_ALL, "spanish");

	int arr[arrSize];

	menu(arr);
}