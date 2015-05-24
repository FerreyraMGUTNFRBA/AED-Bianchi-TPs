#include <iostream>

using namespace std;

int main(){

    int num1, num2, mayor;

    cout << "Ingrese el primer numero: " << endl;
    cin >> num1;

    cout << "Ingrese el segundo numero (distinto que el primero): " << endl;
    cin >> num2;

    if(num1 > num2)
    {
        mayor = num1;
    }else
    {
        mayor = num2;
    }

    cout << "El mayor entre ellos es: " << mayor << endl;

}
