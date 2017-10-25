#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <iostream>
#include <string>

using namespace std;


template<class T>
void quickSort(T *vect, unsigned long inicio, unsigned long fin) {
    unsigned long pivote = (inicio + fin) / 2;
    unsigned long i = inicio;
    unsigned long j = fin;
    T aux;

    do {
        while ((vect[i] < pivote) && (j <= fin)) {
            i++;
        }

        while ((pivote < vect[j]) && (j > inicio)) {
            j--;
        }

        if (i <= j) {
            aux = vect[i];
            vect[i] = vect[j];
            vect[j] = aux;
        }
    } while ( i <= j);

    if (inicio < j)
        quickSort(*vect, inicio, j);
    if (i < fin)
        quickSort(*vect, i, fin);

}


#endif //QUICKSORT_H
