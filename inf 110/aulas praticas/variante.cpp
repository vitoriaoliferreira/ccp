#include <iostream>
using namespace std;

int main() 
{
    long long int p0,taxa,semanas=0;
    
    
    cin >> p0 >> taxa;

    while (p0 < 1000000000)
    {
        p0 = (p0*taxa)+p0;
        ++semanas;
    }
    
    cout << semanas << endl;

    return 0;
}