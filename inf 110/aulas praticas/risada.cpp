#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int numero, cont=1;
    char k='k';

    cin >> numero;

    while (cont <= numero)
    {
        cout << k;
        cont++;
    }

    cout << endl;
    return 0;
}