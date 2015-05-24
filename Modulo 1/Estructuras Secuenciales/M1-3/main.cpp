#include <iostream>

using namespace std;

int main(){

    unsigned int day, year, month;

    cout << "Ingrese el dia: " << endl;
    cin >> day;

    cout << "Ingrese el mes: " << endl;
    cin >> month;

    cout << "Ingrese el anio: " << endl;
    cin >> year;

    cout << "La fecha formateada como AAAAMMDD es: " << year*10000 + month*100 + day << endl;

}
