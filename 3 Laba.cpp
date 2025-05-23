#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y;

    // Ввод значения x
    cout << "Введите значение x: ";
    cin >> x;

    if (x <= 1) {
        y = asin(x / (pow(x, 2) + 1));
    } else if (x > 1 && x < 2) {
        y = log(pow(x, 4) / (1 + pow(x, 4)));
    } else if (x >= 2) {
        // y(x) = lg|(x^(-x)) * (x^4 - x)|
        double Z1 = pow(x, -x);      // x^(-x)
        double Z2 = pow(x, 4) - x;   // x^4 - x
        y = log10(fabs(Z1 * Z2)); // lg|Z1 * Z2|
    }



    cout << "y(" << x << ") = " << y << endl;

    return 0;
}