#include <iostream>

using namespace std;

int main(){

    int num;

    double quinta, resto, septima;

    cout << "Ingrese un numero entero: " << endl;
    cin >> num;

    quinta = num / 5.0;

    resto = num % 5;

    septima = quinta / 7;

    cout << "La quinta parte es: " << quinta << endl;

    cout << "El resto de la division entre cinco es: " << resto << endl;

    cout << "La septima parte de su quinta calculada anteriormente es: " << septima << endl;
}
