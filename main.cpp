#include <iostream>
#include "funciones.h"

using namespace std;



int main() {

    int numero;
    nodo *pila = NULL;

    cout<< ".:CARGA CON PUSH:." << endl;
    for (int i = 0; i < 5 ; ++i) {
        cout<< "Ingrese valor: ";
        cin >> numero;
        push(pila,numero);
    }

    cout<< ".:DESCARGA CON POP:." << endl;
    for (int i = 0; i < 5 ; ++i) {

        numero = pop(pila);
        cout<< "Numero: " << numero <<endl;

    }

    return 0;
}


