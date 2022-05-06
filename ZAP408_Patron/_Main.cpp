#include <iostream>
#include <string>
#include <locale>

int main()
{
	setlocale(LC_ALL, "spanish");

	std::string cadena = "Dada una cadena";
	std::string subcadena = "da";

	int nCadena = cadena.length();
	int nSubcadena = subcadena.length();
	int n = nCadena - nSubcadena;
	int indice = 0;
	bool isInChain = false;
	int nAciertos = 0;

	std::cout << "La cadena es: " << cadena << std::endl;
	std::cout << "La subcadena es: " << subcadena << std::endl << std::endl;

	for (int i = 0; i <= n; i++) // Se va por todas las posibles primeras letras de la cadena
	{
		if (subcadena[0] == cadena[i]) // Compara la primera letra de la subcadena con la actual de la cadena
		{
			for (int j = i; j < i + nSubcadena; j++)
			{
				if (cadena[j] == subcadena[j - i]) nAciertos++; // Cuenta el numero de aciertos
			}

			if (nAciertos == nSubcadena) // Si acert� en todas las letras, lo toma como v�lido
			{
				indice = i + nSubcadena - 1; // Sumamos el �ndice de la letra actual con el n�mero de letras en la subcadena
				nAciertos = 0; // Hacemos un reset del n�mero de aciertos
				isInChain = true; // Sabemos que al menos tenemos una soluci�n
			}
		}
	}

	if (isInChain)
	{
		std::cout << "La subcadena se encuentra en el �ndice: " << indice;
		return true;
	}

	std::cout << "La subcadena no se encuentra en el la cadena";
}