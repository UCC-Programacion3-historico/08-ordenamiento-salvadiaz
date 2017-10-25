#ifndef BUBBLESORT_H
#define BUBBLESORT_H


template <class T>
void bubbleSort(T *vect, unsigned long tamanio) {
    bool F = true;
    T aux;
    do {
        F = false;

        for (int i = 0; i < tamanio; ++i) {

            for (int j = i+1; j < tamanio; ++j) {

                if (vect[i] > vect[j]) {

                    aux = vect[i];
                    vect[i] = vect[j];
                    vect[j] = aux;
                    F = !F; //F= true
                }
            }
        }
    } while (F);
}


#endif //BUBBLESORT_H
