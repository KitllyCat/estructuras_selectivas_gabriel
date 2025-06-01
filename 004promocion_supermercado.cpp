#include <iostream>
using namespace std; 

//PROGRAMA PARA CALCULAR EL DESCUENTO QUE SE APLICARÁ SEGÚN EL NÚMERO INGRESADO

int main() {
    float totalCompra;
	float descuento;
	float totalPagar;
    int numero;

    cout << "Ingrese el monto total de la compra: ";
    cin >> totalCompra;
    cout << "Ingrese un numero (0-100): ";
    cin >> numero;

    if (numero < 74){
        descuento = totalCompra * 0.15;
    }else{
        descuento = totalCompra * 0.20;
	}
    totalPagar = totalCompra - descuento;

    cout << "\nTotal a pagar: S/." << totalPagar << endl;

    return 0;
}