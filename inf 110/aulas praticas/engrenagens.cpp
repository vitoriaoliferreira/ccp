#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int d1,d2;
    
    cin >> d1 >> d2;
    if (d2%d1==0)
        cout << "1" << endl;
    else 
        cout << "0" << endl;
    return 0;

}