#include <iostream>
using namespace std;

int main(){
    int n1;
    string sb[6];
    cout << "Cuantos sabores de helados quieres?. NOTA maximo es de 6 " << endl;
    cin >> n1;
    if (n1 > 1 && n1 <= 6)
    {
            for (int i = 0; i < n1; i++)
        {
            cout << "dame el sabor " << i + 1 << endl;
            cin >> sb[i];
        }
        for (int i = 0; i < n1; i++)
        {
            cout << "bola " << i + 1 << " tiene el sabor de " << sb[i] << endl;
        }
    }else{
        cout << "el numero de sabores es demasiado" << endl;
    }

    return 0;
}