#include <iostream>
using namespace std;

//PROGRAMA PARA DETERMINAR SI UN ALUMNO APRUEBA O REPRUEBA SEGÚN SU PROMEDIO DE 3 CALIFICACIONES

int main(){
	SetConsoleOutputCP(CP_UTF8);
    float calificacion, promedio = 0;
    int contador = 0;
    while(contador<3){
        cout << "Ingresa la calificación " << contador + 1 << " (0-100): ";
        cin >> calificacion;
        if(calificacion>=0 || calificacion <= 100){
            promedio += calificacion;
            contador++;
        }else{
            cout<<"Calificacion inválida. Intenta de nuevo.\n";
        }
    }
    promedio/=3;
    if(promedio >= 70){
        cout<<"Aprobado con el promedio de: "<<promedio;
    }else{
        cout<<"Reprobado con el promedio de: "<<promedio;
    }
    
    return 0;
}