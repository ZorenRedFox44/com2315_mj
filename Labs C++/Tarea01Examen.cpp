#include <iostream>
using namespace std;

int main()
{

    double Examen1, Examen2, Examen3, Examen4;

    cout << "Ingrese la calificacion del primer examen: ";
    cin >> Examen1;

    cout <<"Ingrese la calificacion del segundo examen: ";
    cin >> Examen2;

    cout << "Ingrese la calificacion del tercer examen: ";
    cin >> Examen3;

    cout << "Ingrese la calificacion del cuarto examen: ";
    cin >> Examen4;


    double totalNotas = Examen1 + Examen2 + Examen3 + Examen4;
    double promedio = totalNotas / 4.0;
    
    cout <<"El promedio final es: "<< promedio <<"% promedio"<<endl;
    return 0;

}
