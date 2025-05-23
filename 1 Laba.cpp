#include <iostream>
#include <cmath>

using namespace std;
int main() {
 double a,b,x;
  cout << "Введите координату x: " << endl;
  cin >> x;
  b = cos(pow(abs(x), 0.5));
  a = b/(pow(b,2)+5); // Считает дробь
  double arc = acos(a); // Считает акркосинус дроби
  double c = pow(arc, 6); // Возводит в степень акркосинус
  double cor = pow(c, 0.2); // Считает корень 5 степени
  cout << "cor = " << cor << "\n";
  double x4 = x * 4;
  cout << "x4 = " << x4<< "\n";  
  double cot=1/tan(x4);
  cout << "cot = " << cot << "\n";
  double e = pow(4,cot)+5;
  cout << "e = " << e << "\n";
  double loga = log2(e);
  double y = cor + loga; 
  
  cout << "y = " << y << "\n";
if (x >= -1.5 && y >= -1.5 && x <= 1.5 && y <= 1.5) {
      cout << "Точка принадлежит области" << endl;
      
  } 
  else {
      cout << "Точка не принадлежит области" << endl;
      } 

}
