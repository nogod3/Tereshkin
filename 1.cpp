/************************************
*Терешкин Артемий Русланович ПИ-231 *
* https://onlinegdb.com/fPJJ0X5ao   *
*                                   *
************************************/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std; 

int main () {

  double p , m , k , o , n , kpd1 , kpd2 , kpd3; 
  
  cout << "Введите p";
  cin >> p;
  cout << "Введите m";
  cin >> m;
  cout << "Введите k";
  cin >> k;
  cout << "Введите o";
  cin >> o;
   
  n = (k - 1) / k;
  kpd1 = 1 - 1 / p;
  kpd2 = ( p - 1) * ( m * m - 1) / (pow (m , n) * ( p - 1) - o * ( p - pow(m , n) ) );
  kpd3 = 1 - 1 / pow ( m , n);
  
  cout << fixed << setprecision(7) << "\n" << kpd1
                                   << "\n" << kpd2
                                   << "\n" << kpd3;
    
  return 0;
}
