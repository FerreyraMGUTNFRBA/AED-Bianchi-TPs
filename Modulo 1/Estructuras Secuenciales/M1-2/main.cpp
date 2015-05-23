#include <iostream>

using namespace std;

int main(){

    double monto, cuota1, cuota2, cuota6;

    cout << "Ingrese el monto: " << endl;
    cin >> monto;

    cuota1 = monto;

    cuota2 = monto * 1.05;

    cuota6 = monto * 1.4;

    cout << "Puede abonar de la siguiente manera: " << endl;

    cout << "En 1 cuota de: " << cuota1 << endl;

    cout << "En 2 cuotas de " << cuota2/2 << " cada una, con un total de " << cuota2 << endl;

    cout << "En 6 cuotas de " << cuota6/6 << " cada una, con un total de " << cuota6 << endl;

}
