#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int numeroAlunos, cont=1;
    double media, soma=0, notas;
    cin >> numeroAlunos;

    while (cont <= numeroAlunos)
    {
        cin >> notas;
        soma += notas;
        cont++;
    }

    media = soma / numeroAlunos;

    cout << fixed << setprecision (2) << media << endl;

    return 0;

}