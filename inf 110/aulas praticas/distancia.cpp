#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double x1, y1, x2, y2; // Variáveis das coordenadas do gráfico
    double distancia, total; // Variáveis que recebem a distancia e o total

    // Entrada dos dados
    cin>> x1;
    cin>> y1;
    cin>> x2;
    cin>> y2;

    // Processamento dos dados
    distancia= pow((x2-x1),2)+pow((y2-y1),2); // Teorema de pitágoras 
    total= sqrt(distancia); // Raiz quadrada do resultado (pq não elevei a distância ao quadrado)

   // Saída do resultado
    cout<< fixed << setprecision(2) << total << endl;

    return 0;
    }