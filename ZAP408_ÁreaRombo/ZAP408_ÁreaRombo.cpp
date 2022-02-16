//ZAP408_ÁreaRombo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.

#include <iostream>

int main()
{
    int side; //L
    int height; //H

    std::cout << "Welcome to the rombus area calculator!" << std::endl << std::endl;
    std::cout << "Please insert the side of the rombus: ";
    std::cin >> side;
    std::cout << "Please insert the height of the rombus: ";
    std::cin >> height;
    std::cout << std::endl;
    std::cout << "The area of your rombus is: " << side * height / 2; //El área del rombo es: (L * H)/2
}
