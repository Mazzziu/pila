//
// Created by Mazzziu on 19/11/2018.
//

#include "funciones.h"


void push (nodo *&pila, int n){

    nodo * nuevo = new nodo(); // 1) creo nodo

    nuevo->num = n; // 2) cargo el nodo

    nuevo->sgt = pila; // 3) lo uno a la pila
    pila = nuevo; // 3) lo uno a la pila

}

int pop (nodo *&pila){

    int valor = pila->num; // 1) agarrar el valor

    nodo * aux = pila; // uso aux para no poder el hilo de la pila

    delete (pila); // borro ese nodo de la pila

    pila = aux->sgt; // vuelvo a asignar el inicio de la pila al siguiente

    return (valor);
}