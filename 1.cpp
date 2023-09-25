#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std; 
int main ()
{
  float p = 2.2;
  float m = 6.35;
  float k = 1.32;
  float o = 0.40;
  float n = 0;
  float kpd1 = 0;
  float kpd2 = 0;
  float kpd3 = 0;
  n = (k - 1) / k;
  kpd2 = ( p - 1) * ( m * m - 1) / (pow (m , n) * ( p - 1) - o * ( p - pow(m , n)));
  kpd3 = 1 - 1 / pow ( m , n);
  kpd1 = 1 - 1 / p; 
  cout << kpd1 << ' ' << kpd2 << ' ' << kpd3 ;
    
    
  return 0;
}
