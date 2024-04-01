#include <iostream>
using namespace std;

int main() {
    int num1;
    int result;
    cout << "Dame un numero y te sumo su pares o impares inferiores: " << endl;
    cin >> num1;
    if (num1 % 2 == 0)
    {
        for (int i = 0; i <= num1; i++)
        {
            if (i % 2 == 0)
            { 
                cout << i << endl;
                result += i;
            }
        }
    }else{
        for (int i = 0; i <= num1; i++)
        {
            if (i % 2!= 0)
            { 
                cout << i << endl;
                result += i;
            }
        }
    }
    cout << "El numero total es " << result << endl;
    
    return 0;
}
