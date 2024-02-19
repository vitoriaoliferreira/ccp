#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double dividendo, divisor;
    double total;

    cin>> dividendo;
    cin>> divisor;

    total= dividendo/divisor;
    

    cout << fixed <<  setprecision(2) << total << endl;

    return 0;
    }