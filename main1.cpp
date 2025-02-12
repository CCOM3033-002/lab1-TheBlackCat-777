/*
Asignación 1: Box Office
Nombre: Raul S. Rivera Pizarro
Núm. Est: 801-24-2663
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    // Variables para almacenar los datos
    string nombrePelicula;
    int entradasAdultos, entradasNinos;
    const double precioAdulto = 10.00, precioNino = 6.00; // Precios de entradas

    // Propósito del programa
    cout << "Este programa calcula la ganancia bruta y neta de taquilla y la ganancia del distribuidor de una película que se proyecta en el cine." << endl;

    // Solicitar datos al usuario
    cout << "\nIntroduce el nombre de la película: ";
    getline(cin, nombrePelicula);
    cout << "Introduzca la cantidad de entradas de adulto vendidas: ";
    cin >> entradasAdultos;
    cout << "Introduzca la cantidad de entradas de niño vendidas: ";
    cin >> entradasNinos;

    // Calcular ganancias
    double gananciasBrutas = (entradasAdultos * precioAdulto) + (entradasNinos * precioNino);
    double gananciasNetas = gananciasBrutas * 0.20; // 20% de las ganancias brutas
    double montoDistribuidor = gananciasBrutas - gananciasNetas;

    // Mostrar resultados con formato adecuado
    cout << fixed << setprecision(2); // Asegurarse de que los decimales estén alineados
    cout << left << setw(27) << "\nNombre de la película: " << right << setw(6) <<  "\"" << nombrePelicula << "\"" << endl;
    cout << left << setw(30) << "Entradas de adulto vendidas:" << right << setw(3) << entradasAdultos << endl;
    cout << left << setw(30) << "Entradas vendidas para niños:" << right << setw(4) << entradasNinos << endl;
    cout << left << setw(22) << "Ganancias brutas en taquilla:" << right << setw(3) << "$ " << gananciasBrutas << endl;
    cout << left << setw(26) << "Ganancias netas de taquilla:" << right << setw(4) << "$ " << gananciasNetas << endl;
    cout << left << setw(24) << "Monto pagado al distribuidor:" << right << setw(3) << "$ " << montoDistribuidor << endl;

    return 0;
}
