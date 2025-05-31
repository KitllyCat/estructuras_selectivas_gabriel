#include <iostream>
using namespace std;

//PROGRAMA QUE APLICA UN 20% DE DESCUENTO SI LA COMPRA DEL USUARIO SUPERA LOS S/.1000

int main() {
    float compra;
	float total;
	float descuento;
    cout << "Ingrese monto de compra: S/.";
    cin >> compra;
    
	descuento = compra * 0.2;
	if (compra <= 0){
		cout << "El monto debe ser mayor a 0";
		return 1;
	}
	if (compra > 1000){
		total = compra - descuento;
		cout << "\nEntonces el total a pagar sera: S/." << total << endl;
	}else {
		cout << "\nNo se aplica descuento, el total a pagar es: S/." << compra << endl;
	}
	
	return 0;
}