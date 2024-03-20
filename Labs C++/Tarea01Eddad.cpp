#include <iostream>
using namespace std;

int main() {

    int anioNacimiento, anioActual, edad;

    cout << "Ingrese el año de Nacimiento: ";
    cin >> anioNacimiento;

    cout << "Ingrese el año actual: ";
    cin >> anioActual;

    edad = anioActual - anioNacimiento;

    cout << "La edad aproximado es de: " << edad << "años."<<endl;
}