#include <iostream>
using namespace std;

int main()
{
    double base, altura, area;

    cout <<"Ingrese la altura del rectangulo: ";
    cin >> altura;

    cout <<"Ingrese la base del rectangulo: ";
    cin >> base;

    area = base * altura;

    cout <<"el area del rectangulo: " << area << endl;

    return 0;
}