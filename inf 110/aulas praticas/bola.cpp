#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int nf,ft,fp;
    
    cin >> nf >> ft >> fp;
    if (nf <= 40 || nf < 60)
        cout << "Final" << endl;
    else if (ft > 15 || fp > 7 || nf < 40)
        cout << "Reprovado" << endl;
    
    else if (nf >= 60 )
        cout << "Aprovado" << endl;
    return 0;

}