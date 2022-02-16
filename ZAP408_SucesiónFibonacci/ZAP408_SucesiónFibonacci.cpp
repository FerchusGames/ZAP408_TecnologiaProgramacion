// ZAP408_SucesiónFibonacci.cpp : Este programa le pide un entero al usuario y comprueba si está dentro de la Sucesión de Fibonacci

#include <iostream>

int main()
{
	int currentResult = 0; //Guarda el valor del resultado que se tiene que mostrar
	int previousResult = 1; //Guarda el valor del resultado que se tuvo la vez pasada
	int displayResult = 1; //Es el valor que se va a mostrar en la consola
	int targetResult; //El valor al que el programa va a tratar de llegar y verificar si está en la sucesión o no

	std::cout << "Introduce the target number: ";
	std::cin >> targetResult;
	std::cout << std::endl;

	while (targetResult > currentResult)
	{
		currentResult = currentResult + previousResult; //Suma el resultado actual y el anterior para seguir la sucesión
		previousResult = displayResult; //Actualiza el resultado previo 
		displayResult = currentResult; //Cambia el resultado que mostrará en la consola
		std::cout << displayResult;
		std::cout << std::endl;
	}

	if (targetResult != previousResult) //Comprueba que el valor ingresado no esté en la sucesión
	{
		std::cout << "The number you introduced isn't in the fibonacci succession";
	}

	else //Te dice que está en la ecuación
	{
		std::cout << "The number you introduced is in the fibonacci succession";
	}
}

