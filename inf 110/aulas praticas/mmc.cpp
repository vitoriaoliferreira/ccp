#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int a,b,resto,mmc;
    
    cin >> a >> b;
    for (mmc=1; mmc>0; mmc++)
    {
        resto=(a*mmc)%b;
        if(resto==0) break;
    }
    cout << (a * mmc) << endl;
    return 0;

}