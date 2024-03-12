#include <iostream>
#include <string>

using namespace std;

int main() 
{

    int entero;
    float flotante;
    char caracter;
    string cadena;

    cout <<"Ingrese un numero entero:";
    cin >> entero;

    cout <<"Ingrese un numero flotante:";
    cin >> flotante;

    cout <<"Ingrese un caracter:" ;
    cin >> caracter;

    cout <<"Ingrese una caracteres:" ;
    cin.ignore(); 
    getline(cin, cadena);

    cout <<"El numero entero entrado es: "<<entero<<endl;
    cout <<"El numero flotante entrado es: "<<flotante<<endl;
    cout <<"El caracter entrado es: "<<caracter<<endl;
    cout <<"La cadena de caracteres entrada es: "<<cadena<<endl;
    return 0;

}


