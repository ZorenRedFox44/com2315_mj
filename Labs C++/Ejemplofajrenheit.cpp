#include <iostream>
using namespace std;

int main()
{
    double celsius, fahrenheit;

    cout <<"ingresa la temperatura en grados celsius: ";
    cin >> celsius;

    fahrenheit = celsius * 9/5 + 32;

    cout <<"La temperatura entrada de gragos celsius es equivalente a "<<fahrenheit<< " grados fahrenheit."<<endl;

    return 0;

}