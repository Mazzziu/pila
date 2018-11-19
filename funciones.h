//
// Created by Mazzziu on 19/11/2018.
//

struct nodo{
    int num;
    nodo *sgt;
};


#ifndef NODOS_FUNCIONES_H
#define NODOS_FUNCIONES_H

void push (nodo *&pila, int n);
int pop (nodo *&pila);

#endif //NODOS_FUNCIONES_H
