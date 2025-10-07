#ifndef STRUCTURES_H
#define STRUCTURES_H

typedef struct point{
    int x;
    int y;
} point;

typedef struct cellule{
    point *p1;
    struct cellule *suivant;
} cellule;

#endif