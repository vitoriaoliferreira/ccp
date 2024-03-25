#include <algorithm>
#include <iostream>
#include <chrono>
#include <iomanip>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

int taxaVideo, taxaDownload, tamanho;

bool consigoAssistirSemPausas(int tempoCarregamento) {
    int bytesDisponiveis = taxaDownload * tempoCarregamento;
    for (int i = 0; i < tamanho; i++) {
        bytesDisponiveis = bytesDisponiveis - taxaVideo;
        if (bytesDisponiveis <= 0) {
            return true;
        }
        bytesDisponiveis = bytesDisponiveis + taxaDownload;
    }
    return false;
}

int buscaSeq(bool *array,int begin,int end, bool chave){
    for(int i = begin; i < end; i++) {
        if (array[i] == chave) {
            return i;
        }
    }
    return -1;
}

int main() {
    cin >> taxaVideo >> taxaDownload >> tamanho;

    bool *resultado = new bool[5000];
    for (int i = 0; i <= 5000; i++) {
        resultado[i] = consigoAssistirSemPausas(i);
    }

    cout << buscaSeq(resultado, 0, 5000, true) << endl;

    delete[] resultado;
    return 0;
}