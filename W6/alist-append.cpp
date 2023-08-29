#include <iostream>
#include "alist.h"

using namespace std;

void append(alist* a, const alist* b) {
    int nA = a->size; //4
    int* lA = a->elements ; //endereço do primeiro elemento de A
    int* lB = b->elements; // endereço do primeiro elemento de B
    int nB = b->size; //3 

    int* newElements = new int[nA + nB];  //alocar memóri em heap para criar uma array de dimensao nA+nB
    for (int i = 0; i < nA; i++) {
        newElements[i] = lA[i];    //juntar os elementos de A *(lA+i)
    }
    for (int i = 0; i < nB; i++) {
        newElements[nA + i] = lB[i];  //juntar os elementos de B
    }

    a->size = nA + nB;   //trocar o valor do size de A
    delete[] a->elements;  //apagar a array atual em A
    a->elements = newElements;  // trocar a array
}

int main()
{
    const int nA = 4;
    int eA[nA] = { 1, 2, 3, 4 };
    alist* a = build(nA, eA);
    const int nB = 3;
    int eB[nB] = { 5, 6, 7 };
    const alist* b = build(nB, eB);
    append(a, b);
    print(a);
    destroy(a);
    destroy(b); 

}
