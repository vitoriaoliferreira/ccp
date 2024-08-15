#include "Mediana.h"

Mediana::Mediana() {}

void Mediana::insere(int el) {
    // Insere o elemento na fila apropriada
    if (before_mediana.size()==0 || el <= before_mediana.top()) {
        before_mediana.push(el);
    } else {
        after_mediana.push(-el);  // Simula min-heap usando negativo
    }

    // Balanceia as filas
    if (before_mediana.size() > after_mediana.size() + 1) {
        after_mediana.push(-before_mediana.top());
        before_mediana.pop();
    } else if (after_mediana.size() > before_mediana.size()) {
        before_mediana.push(-after_mediana.top());
        after_mediana.pop();
    }
}

int Mediana::getMediana() {
    if (before_mediana.size() > after_mediana.size()) {
        return before_mediana.top();
    } else {
        return (before_mediana.top() - after_mediana.top()) / 2;
    }
}
