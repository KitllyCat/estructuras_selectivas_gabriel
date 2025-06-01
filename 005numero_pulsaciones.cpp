#include <iostream>
using namespace std;

//PROGRAMA PARA CALCULAR NÚMERO DE PULSACIONES SEGÚN EL SEXO Y LA EDAD QUE EL USUARIO INGRESA

int main() {
    char sexo;
    int edad;
    float pulsaciones;

    cout << "Ingrese su sexo (M/F): ";
    cin >> sexo;
    cout << "Ingrese su edad: ";
    cin >> edad;

    if (sexo == 'F' || sexo == 'f'){
        pulsaciones = (220 - edad) / 10;
    }else{
        pulsaciones = (210 - edad) / 10;
    }
    cout << "El numero de pulsaciones cada 10 segundos: " << pulsaciones << endl;

    return 0;
}