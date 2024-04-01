#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Ingresa un numero y te digo si es primo: ";
    cin >> n;
    if (n != 1 && n > 1)
    {
        for (int i = 2; i <= n; i++)
        {
            if ((n % i) == 0 && n != 2)
            {
                cout << "El numero " << n << " no es primo: " << endl;
                break;
            }else {
                cout << "El numero " << n << " es primo: " << endl;
                break;
            }
        } 
    } 
}