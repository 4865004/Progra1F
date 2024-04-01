#include <iostream>
using namespace std;

int main() {
    int num1, diez;
    cout << "Ingresa un numero y te muestro sus multiplicaciones hasta el 10" << endl;
    cout << "Ingresa el numero: " << endl; 
    cin >> num1;

    while (diez <= 10)
    {
        cout << num1 << " x " << diez << " = " << num1 * diez << endl;
        diez++;
    }
    
    return 0;
}
