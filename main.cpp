/*
Asignación 1: Box Office
Nombre: Raul S. Rivera Pizarro
Núm. Est: 801-24-2663
*/

#include <iostream>
#include <string>

using namespace std;

int main(){

    //Declaracion de variables
    string pelicula;
    double entradas_adulto, entradas_ninos, ganancias_brutas, ganancias_netas, monto;

    //Desplrgar el proposito del programa
    cout << "Este programa calcula la ganancia bruta y neta de taquilla y la ganancia del distribuidor de una película que se proyecta en el cine." << endl;

    //Entrar el nombre de la pelicula
    cout << "\nNombre de la película: ";
    cin >> pelicula;

    //Entrar la cantidad de entradas de adulto
    cout << "Entradas vendidas para adultos: ";
    cin >> entradas_adulto;

    //Entrar la cantidad de entradas de nino
    cout << "Entradas vendidas para niños: ";
    cin >> entradas_ninos;

    //Ganancias brutas de taquilla
    ganancias_brutas = entradas_adulto * 10.00 + entradas_ninos * 6.00

    //Ganancias neta
    ganancias_netas = ganancias_brutas * 0.20

    //Monto pagado al distribuidor
    





    return 0;
}
