#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int dividendo, divisor, total, resto;

    cin>> dividendo;
    cin>> divisor;

    total= dividendo/divisor;
    resto = dividendo%divisor;

    cout << total << " " << resto << endl;

    return 0;
    }