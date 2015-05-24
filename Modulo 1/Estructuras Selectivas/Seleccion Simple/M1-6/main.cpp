#include <iostream>

using namespace std;

int main(){

    int dia, mes, anio, fecha1, fecha2;

    string mayor;

    cout << "Ingrese primer fecha: " << endl;
    cin >> dia;
    cin >> mes;
    cin >> anio;

    fecha1 = anio * 10000 + mes * 100 + dia;

    cout << "Ingrese segunda fecha: " << endl;
    cin >> dia;
    cin >> mes;
    cin >> anio;

    fecha2 = anio * 10000 + mes * 100 + dia;

    if (fecha1 > fecha2)
    {
        mayor = "Primer Fecha";
    }else
    {
        mayor = "Segunda Fecha";
    }

    cout << "La fecha mas reciente es " << mayor << endl;

}
