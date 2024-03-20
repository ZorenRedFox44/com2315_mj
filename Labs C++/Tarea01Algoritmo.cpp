#include <iostream>
using namespace std;

int main()
{
    double area, base, altura, perimetro;

    cout <<"Ingrese el area del perimetro: ";
    cin >> area;

    cout <<"Ingrese la altura del perimetro: ";
    cin >> altura;

    area = base * altura;
    perimetro = 2 * base + 2 * altura;

    cout <<"el area del retangulo es: "<< area << endl;
    cout <<"El perimetro del rectangulo es: "<< perimetro << endl;

    return 0;
}