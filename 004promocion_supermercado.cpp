#include <iostream>
using namespace std; 

//PROGRAMA PARA CALCULAR EL DESCUENTO QUE SE APLICARÁ SEGÚN EL NÚMERO INGRESADO

int main() {
    float totalCompra;
    float descuento;
    float totalPagar;
    int numero;

    do {
        cout << "Ingrese el monto total de la compra: ";
        cin >> totalCompra;
        if (totalCompra <= 0) {
            cout << "El monto debe ser mayor a 0" << endl;
        }
    } while (totalCompra <= 0);
    do {
        cout << "Ingrese un numero (0-100): ";
        cin >> numero;
        if (numero < 0 || numero > 100) {
            cout << "El numero tiene que estar entre 0 y 100" << endl;
        }
    } while (numero < 0 || numero > 100);
    if (numero < 74){
        descuento = totalCompra * 0.15;
    }else{
        descuento = totalCompra * 0.20;
    }
    totalPagar = totalCompra - descuento;

    cout << "\nTotal a pagar: S/." << totalPagar << endl;

    return 0;
}