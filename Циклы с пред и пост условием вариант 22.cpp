/******************************************
*  Терешкин Артемий ПИ-231                *
*  Циклы с пост и пред условием, 22       *
*  https://onlinegdb.com/NKOWQNRg0v       *
******************************************/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
  double w0;
  double w = 10;

  cout << "Введите w0:";
  cin >> w0;
 
  cout << fixed << setprecision(2);

  while (w < 20) {
    cout << " W = " << w
         << " T = " << 2000 / (w0 * (sqrt(1 - pow((w / w0) , 2)))) << '\n';
    w += 2.5;
  }

  do {
    cout << " W = " << w
         << " T = " << 2000 / (w0 * (sqrt(1 - pow((w / w0) , 2)))) << '\n';
    w += 1;
  } while (w <= 24 );

  return 0;
}
