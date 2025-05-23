#include <iostream>
using namespace std;

int main() {
    double V1, t1, V2, t2;

    cout << "Введите объем первой воды: ";
    cin >> V1;
    cout << "Введите температуру первой воды: ";
    cin >> t1;
    cout << "Введите объем второй воды: ";
    cin >> V2;
    cout << "Введите температуру второй воды: ";
    cin >> t2;

    double V0 = V1 + V2;

    double t0 = (V1 * t1 + V2 * t2) / (V1 + V2);

    cout << "Общий объем смеси: " << V0 << " литров" << endl;
    cout << "Температура смеси: " << t0 << " градусов Цельсия" << endl;

    return 0;
}
