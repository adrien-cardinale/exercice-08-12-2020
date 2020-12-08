/*
- [x] Présentation de l'exercice...
- [x] Déclarer référentiel GitHub exercice (4min)
- [x] Déclarer un tableau de 128 float 32-bits (5min) -> 13h30
- [x] Remplir ce tableau avec des valeurs aléatoires 0..255 (10min)
- [x] Identifier la valeur max. du tableau et la valeur min. puis afficher (5min)
- [ ] Normaliser ce tableau à 1.0 (10min)
- [ ] Afficher le tableau sur la sortie standard (5min)
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<float.h>



int main(int argc, char* argv[]){
    srand(atoi(argv[1]));
    float array[128] = {0};
    const int size = sizeof(array) / sizeof(array[0]);
    float max = FLT_MIN;
    float min = FLT_MAX;
    //generer
    for(int i = 0;i < size;i++){
        array[i] = (float)rand() / RAND_MAX * 255;
        if(array[i] > max)
            max = array[i];
        if(array[i] < min)
            min = array[i];
        printf("array[%d] = %f\n", i, array[i]);
    }
    
    
    //normaliser
    for(int i = 0; i < size; i++){
        array[i] /= max;
        array[i] *= 1.0;
        printf("array[%d] = %f\n", i, array[i]);
    }
    //afficher
    
    printf("max = %f\n", max);
    printf("min = %f\n", min);
    return 0;
}