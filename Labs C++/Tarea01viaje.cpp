#include <iostream>
using namespace std;

int main() {

    double Velocidadpromedio, tiempodeviaje, distanciaTotal;

    cout <<"Ingrese la velocidad promedio (km/h): ";
    cin >>Velocidadpromedio;

    cout <<"Ingrese la tiempo de viaje (horas): ";
    cin >>tiempodeviaje;

    distanciaTotal = Velocidadpromedio * tiempodeviaje;

    cout << "la distancia total recorrida es: " << distanciaTotal << " Kilometros." << endl;

    return 0;
}