#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double raio, altura, volume;
    
    cin>> raio;
    cin>> altura;

    volume= 3.1415*pow(raio, 2)*altura ;
    

    cout <<  fixed << setprecision(2) << volume << endl;

    return 0;
    }