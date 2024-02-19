#include <iostream>
using namespace std;

int main() 
{
    int numero, cont=1;
    long long fatorial=1;

    cin >> numero;

    while (cont <= numero)
    {
        fatorial *= cont;
        cont++;
    }

    cout  << fatorial << endl;

    return 0;
}