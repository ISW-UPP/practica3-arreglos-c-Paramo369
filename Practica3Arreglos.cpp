// Practica3Arreglos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

int main()
{
    //Programa que pida 10 números y los muestre en orden inverso al que fueron agregados.
    int i;
    int numeros[10];

    for (i = 0; i < 10; i++)
    {
        cout << "Ingresa el numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    cout << "\n";

    for (i = 9; i > 0; i--)
    {
        cout << numeros[i] << endl;
    }

    cout << "----------------------------------------------------------" << endl;

    //Programa que pida 10 números, calcule su media y luego muestre los que están por encima de la media.
    int x;
    int numeros2[10];
    float media = 0;

    for (x = 0; x < 10; x++)
    {
        cout << "Ingresa el numero " << x + 1 << ": ";
        cin >> numeros2[x];
    }
    
    cout << "\n";

    for (x = 0; x < 10; x++)
    {
        media += numeros2[x];
    }

    cout << "La media es: " << media / 10 << endl;

    cout << "----------------------------------------------------------" << endl;

    //Programa que pida 10 números, para que calcule cuál es el mayor de ellos.
    int z;
    int numeros3[10];
    int mayor = 0;

    for (z = 0; z < 10; z++)
    {
        cout << "Ingresa el numero " << z + 1 << ": ";
        cin >> numeros3[z];
    }

    for (z = 0; z <= 10; z++)
    {
        if (z > mayor)
        {
            mayor = z;
        }
    }

    cout << "El numero mayor es: " << mayor;
}