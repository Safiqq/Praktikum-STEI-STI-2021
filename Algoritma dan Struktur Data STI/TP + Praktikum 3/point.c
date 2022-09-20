// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 16 September 2022
// Topik praktikum : Pra-praktikum 3
// Deskripsi       : Implementasi dari point.h

#include <stdio.h>
#include <math.h>
#include "point.h"

POINT MakePOINT(float X, float Y)
{
    POINT P;
    Absis(P) = X;
    Ordinat(P) = Y;
    return P;
}

void BacaPOINT(POINT *P)
{
    float X, Y;
    scanf("%f %f", &X, &Y);
    Absis(*P) = X;
    Ordinat(*P) = Y;
}

void TulisPOINT(POINT P)
{
    printf("(%.2f,%.2f)", P.X, P.Y);
}

boolean EQ(POINT P1, POINT P2)
{
    return P1.X == P2.X && P1.Y == P2.Y;
}

boolean NEQ(POINT P1, POINT P2)
{
    return P1.X != P2.X || P1.Y != P2.Y;
}

boolean IsOrigin(POINT P)
{
    return P.X == 0 && P.Y == 0;
}

boolean IsOnSbX(POINT P)
{
    return P.Y == 0;
}

boolean IsOnSbY(POINT P)
{
    return P.X == 0;
}

int Kuadran(POINT P)
{
    if (P.X > 0)
    {
        if (P.Y > 0) return 1;
        else return 4;
    }
    else
    {
        if (P.Y > 0) return 2;
        else return 3;
    }
    return 0;
}

POINT PlusDelta(POINT P, float deltaX, float deltaY)
{
    return MakePOINT(Absis(P) + deltaX, Ordinat(P) + deltaY);
}

void Geser(POINT *P, float deltaX, float deltaY)
{
    Absis(*P) += deltaX;
    Ordinat(*P) += deltaY;
}

float Jarak0(POINT P)
{
    return sqrt((P.X * P.X) + (P.Y * P.Y));
}

float Panjang(POINT P1, POINT P2)
{
    return sqrt(((P1.X - P2.X) * (P1.X - P2.X)) + ((P1.Y - P2.Y) * (P1.Y - P2.Y)));
}