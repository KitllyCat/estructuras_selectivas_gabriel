#include <iostream>
using namespace std;

//PROGRAMA PARA CALCULAR PENSIÓN SEGÚN PROMEDIO DE NOTAS

int main() {
    float promedio;
    float pension;
    float total;

    cout << "Ingrese el promedio del alumno: ";
    cin >> promedio;
    cout << "Ingrese el monto de la pensión: ";
    cin >> pension;

    if (promedio >= 18) {
        total = pension * 0.70;
    }else{
        total = pension * 1.18;
    }

    cout << "El monto total a pagar es: S/." << total << endl;

    return 0;
}