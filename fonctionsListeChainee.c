#include "structures.h"
#include <stdio.h>
#include <stdlib.h>

cellule *NouvCel(point p){
    cellule cel;
    cellule *pCel = &cel;
    pCel = malloc(sizeof(cellule));
    *pCel->p1 = p;
    free(pCel);
    return pCel;
}

void InsererCellule(int pl, cellule *cel, cellule *liste){
    liste[pl++] = *cel;
}

void SupprimeCellule(int pl, cellule *liste){
    for(int i = pl; i < sizeof(liste)-1; i++){
        liste[pl] = liste[pl+1];
    }
}

void Afficher(cellule *liste){
    cellule *courant = liste;
    while(courant != NULL){
        int x = courant->p1->x;
        int y = courant->p1->y;
        printf("\n%d, %d", x, y);
        courant = courant->suivant;
    }
}