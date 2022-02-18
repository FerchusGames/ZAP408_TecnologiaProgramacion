// ZAP408_Ejercicio6.cpp : Este programa realiza el ejercicio 6 de la clase del 18 de enero de 2022.

#include <iostream>
#include <math.h>

int main()
{
    float m;
    float n;
    float result;
    float compare;

    std::cout << "This program will calculate the result of '(m^m)(n^n)n/m' and will compare it to 'm^(1/2)'" << std::endl << std::endl;
    std::cout << "Please enter the value of 'm': ";
    std::cin >> m;
    std::cout << "Please enter the value of 'n': ";
    std::cin >> n;
    std::cout << std::endl;

    result = (pow(m, m) * pow(n, n)) * (n / m);
    compare = sqrt(m);

    std::cout << "The result is: " << result << std::endl;
    std::cout << "The number to compare is: " << compare << std::endl << std::endl;

    if (result != compare)
    {
        std::cout << "They are not the same number";
        return false;
    }
    else
    {
        std::cout << "They are the same number";
        return true;
    }
}

