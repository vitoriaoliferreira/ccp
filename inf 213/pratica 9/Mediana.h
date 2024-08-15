#ifndef MEDIANA_H
#define MEDIANA_H

#include <iostream>
#include "MyPriorityQueue.h"  
using namespace std;

class Mediana {
public:
    Mediana();
    void insere(int el);
    int getMediana();

private:
    MyPriorityQueue<int> before_mediana;  
    MyPriorityQueue<int> after_mediana;   
};

#endif
