/**********************************************
* Терешкин Артемий, ПИ-231                    * 
* Циклы с пред/пост условием, вариант 22      * 
* https://onlinegdb.com/vreMV7G8AC            * 
**********************************************/
#include <iostream>
#include <cmath>
#include <iomanip>
  
using namespace std;

int main () {
  double chnastr[9] = {10 , 12.5 , 15 , 17.5 , 20 , 21 , 22 , 23 , 24}; 
  double selfch; 
      
  cout << "Введите собственную частоту:"; 
  cin >> selfch;
      
  cout << fixed << setprecision(2); 
      
  for (int i = 0; i < 9; i++) {
    cout << "w = " << chnastr[i]   
         << "T = " << 2000 / (selfch * sqrt (1 -  (pow(chnastr[i] / selfch , 2)))) << '\n';
  }
      
  return 0 ;
               
}
