#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double a,b,c;
    double delta, x1, x2;

    cin >> a >> b >> c;
    
    delta = (b*b)-4.0*a*c;
    x1 = (-b - sqrt (delta) ) / (2*a);
    x2 = (-b + sqrt (delta) ) / (2*a);

    if (delta == 0) 
    {
        cout << fixed << setprecision(2) << x1 << endl;
    }
    else if (delta < 0)
    {
        cout << "Nao ha raiz real" << endl;
    }
    else if (delta > 0)
    {
       
        cout << fixed << setprecision(2) << x1 << " " << x2 << endl;
    }
    return 0;

}