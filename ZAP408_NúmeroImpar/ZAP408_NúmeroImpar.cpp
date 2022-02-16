// ZAP408_NúmeroImpar.cpp : Este programa determina si un número ingresado por el usuario es par o impar

#include <iostream>

int main()
{
    int num; //El número que se va a determinar si es par o impar
    int res; //El residuo de la división

    std::cout << "This program will determine if an integer is either odd or even." << std::endl << std::endl;
    std::cout << "Please enter the integer: ";
    std::cin >> num;

    res = num % 2; //Obtiene ya sea un '1' o un '0' como residuo de la división entre 2

    std::cout << std::endl;
    if (res == 1) std::cout << "The number is odd."; //Si el residuo es 1, es impar
    else std::cout << "The number is even."; //Si el residuo es 0, es par
}

