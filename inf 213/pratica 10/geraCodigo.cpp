#include <iostream>
#include <string>
#include "MyMap.h"

using namespace std;

int main()
{
    string palavra;
    int codigo = 0;
    MyMap<string, int> myMapPalavras;

    while (cin >> palavra)
    {
        // se a palavra ainda nao foi adocionada
        if (myMapPalavras.find(palavra) == NULL)
        {
            myMapPalavras.insert(make_pair(palavra, codigo));
            cout << palavra << " " << codigo << endl;
            codigo++;
        }
        else // se ela ja foi adicionada
        {
            cout << palavra << " " << myMapPalavras[palavra] << "\n";
        }
    }

    return 0;
}