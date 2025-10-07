#include "fonctionsListeChainee.h"

int main(){
    point p1; point p2;
    p1.x = 2;
    p1.y = 1;
    p2.x = 0;
    p2.y = 3;
    cellule *liste;
    cellule *cel = NouvCel(p1);
    cellule *celInsere = NouvCel(p2);
    InsererCellule(-1, cel, liste);
    InsererCellule(0, celInsere, liste);
    Afficher(liste);
    SupprimeCellule(1, liste);
}