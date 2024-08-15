#include <iostream>
#include <string>
#include "MyVecNewIterator.h"
#include "MySet.h"

using namespace std;

int main (int argc, char **argv){
   
    string algoritmo,palavra;
    int cont = 0;    
    bool igual;
    algoritmo = argv[1];

    if (algoritmo == "myvec"){
        
        MyVec<string> vetorPalavras;
        while(cin>>palavra){
            igual = false;

            for(int i=0; i<vetorPalavras.size();i++){
                if(vetorPalavras[i]==palavra){
                    igual = true;
                    break;
                }
            }
            if (igual==false){
                vetorPalavras.push_back(palavra);
            }

            cont++;

        }
        cout << cont << " " << vetorPalavras.size() << "\n";
    }
    else if (algoritmo == "myset"){
        MySet<string> arvorePalavras;

        while(cin>>palavra){
            arvorePalavras.insert(palavra);
            cont++;
        } 
         cout << cont << " " << arvorePalavras.size() << "\n";
    }



    return 0;
}