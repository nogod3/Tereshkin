/******************************************
* Терешкин Артемий ПИ-231                 *
* Циклы с ветвлениями, 22                 *    
* https://onlinegdb.com/HBkljM4Ern        *
******************************************/
#include <iomanip>
#include <cmath>
#include <iostream>

using namespace std; 

int main() {
    double g, v, e, shirx, r, z, K;
    cout << "Введите v:"; 
    cin >> v;
    cout << "Введите e:";
    cin >> e; 
    cout << "Введите r:";
    cin >> r; 
    
    shirx = e / r; 
    
    while ( (g >= 0.1) && ( g <= 5) ) {
    K = log10( (g * e) / v ); 
    cout << "K =" << K << '\n';
        
} 
    if (K < 0.55) { 
    z = pow ( 1 /  (0.7 + 2 * K - (2 * log10(shirx)))  , 2);
    } else {
    z = pow ( 1 / (1.18 + 1.13 * K - (2 * log10(e))) , 2);}
    cout << "z =" << z << '\n';
    
    
    return 0;
}
