#include <iostream>
using namespace std;

//PROGRAMA PARA DETERMINAR SI UN ALUMNO APRUEBA O REPRUEBA SEGÚN SU PROMEDIO DE 3 CALIFICACIONES

int main() {
    float calif1, calif2, calif3, promedio;

    cout << "Ingresa la primera calificacion: ";
    cin >> calif1;
    cout << "Ingresa la segunda calificacion: ";
    cin >> calif2;
    cout << "Ingresa la tercera calificacion: ";
    cin >> calif3;

    promedio = (calif1 + calif2 + calif3) / 3;

    if (promedio >= 70) {
        cout << "Aprobado con el promedio: " << promedio;
    } else {
        cout << "Reprobado con el promedio: " << promedio;
    }

    return 0;
}