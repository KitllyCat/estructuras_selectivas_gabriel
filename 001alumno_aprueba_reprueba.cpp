#include <iostream>
using namespace std;

//PROGRAMA PARA DETERMINAR SI UN ALUMNO APRUEBA O REPRUEBA SEGÚN SU PROMEDIO DE 3 CALIFICACIONES

int main() {
    float calificacion1;
    float calificacion2;
    float calificacion3;
    float promedio;

	do {
        cout << "Ingresa la primera calificacion (0-100): ";
        cin >> calificacion1;
    } while(calificacion1 < 0 || calificacion1 > 100);
	do {
        cout << "Ingresa la segunda calificacion (0-100): ";
        cin >> calificacion2;
    } while(calificacion2 < 0 || calificacion2 > 100);
	do {
        cout << "Ingresa la tercera calificacion (0-100): ";
        cin >> calificacion3;
    } while(calificacion3 < 0 || calificacion3 > 100);
    promedio = (calificacion1 + calificacion2 + calificacion3) / 3;
    
    if (promedio >= 70) {
        cout << "Aprobado con el promedio: " << promedio;
    } else {
        cout << "Reprobado con el promedio: " << promedio;
    }
    
    return 0;
}