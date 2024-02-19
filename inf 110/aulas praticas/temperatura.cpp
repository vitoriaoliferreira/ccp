#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double t, tf, tc;
    char e;

    cin >> t >> e;

    if (e == 'C')
    {
        tf = (1.8 * t + 32.0);
        cout << fixed << setprecision(1) << tf << " F" << endl;
    }
    else if (e == 'F')
    {
        tc = (t-32.0)/1.8;
        cout << fixed << setprecision(1) << tc << " C" << endl;
    }
    
    return 0;

}