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