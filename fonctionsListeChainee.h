#ifndef FONCTIONSLISTECHAINEE_H
#define FONCTIONSLISTECHAINEE_H
#include "structures.h"

cellule *NouvCel(point p);
void InsererCellule(int pl, cellule *cel, cellule *liste);
void SupprimeCellule(int pl, cellule *liste);
void Afficher(cellule *liste);

#endif