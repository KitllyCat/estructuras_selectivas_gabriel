#include <iostream>
using namespace std;

// PROGRAMA QUE APLICA DESCUENTO POR CANTIDAD DE CAMISAS 

int main() {
    int cantidad;
    float precio;
    float total;
    float descuento;

    cout << "Cantidad de camisas: ";
    cin >> cantidad;
    cout << "Precio unitario: S/.";
    cin >> precio;

    if (cantidad <= 0 || precio <= 0) {
        cout << "La cantidad de camisas o el precio de estas no pueden ser cero o negativas." << endl;
        return 1;
    }
    total = cantidad * precio;
    if(cantidad >= 3){
        descuento = total * 0.2;
        total = total - descuento;
    }else{
        descuento = total * 0.1;
        total = total - descuento;
    }
    cout << "Total a pagar: S/." << total;

    return 0;
}