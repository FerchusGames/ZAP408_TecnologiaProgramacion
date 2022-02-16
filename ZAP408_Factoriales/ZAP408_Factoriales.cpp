// ZAP408_Factoriales.cpp : Este programa obtiene el factorial de un entero ingresado por el usuario

#include <iostream>

int main()
{
    int num; //El número del factorial
    int result = 1; //El primer factorial siempre va a ser 1
    std::cout << "This program obtains the factorial of an integer" << std::endl << std::endl;
    std::cout << "Please enter the integer: ";
    std::cin >> num;
    std::cout << std::endl;

    for (int i = 1; i <= num; i++)
    {
        result = result * i; //Actualiza el resultado multiplicándolo por la iteracción actual (La factorial actual)
        std::cout << "The factorial of " << i << " is: " << result << std::endl;
    }
    std::cout << std::endl;
    std::cout << "The factorial of your initial number is: " << result; //Finalmente, muestra el resultado
}
