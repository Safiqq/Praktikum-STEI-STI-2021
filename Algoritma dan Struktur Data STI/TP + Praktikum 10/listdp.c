// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 13 November 2022
// Topik praktikum : Pra-praktikum 10
// Deskripsi       : Implementasi dari listdp.h

#include <stdio.h>
#include <stdlib.h>
#include "listdp.h"

boolean IsEmpty(List L)
{
    return First(L) == Nil && Last(L) == Nil;
}

void CreateEmpty(List *L)
{
    First(*L) = Nil;
    Last(*L) = Nil;
}

address Alokasi(infotype X)
{
    address P = (ElmtList *)malloc(sizeof(ElmtList));
    if (P != Nil)
    {
        Info(P) = X;
        Prev(P) = Nil;
        Next(P) = Nil;
    }
    return P;
}

void Dealokasi(address P)
{
    free(P);
}

address Search(List L, infotype X)
{
    if (!IsEmpty(L))
    {
        address P = First(L);
        while (Info(P) != X && Next(P) != Nil)
        {
            P = Next(P);
        }
        if (Info(P) == X)
            return P;
    }
    return Nil;
}

void InsVFirst(List *L, infotype X)
{
    address P = Alokasi(X);
    if (P != Nil)
        InsertFirst(L, P);
}

void InsVLast(List *L, infotype X)
{
    address P = Alokasi(X);
    if (P != Nil)
        InsertLast(L, P);
}

void DelVFirst(List *L, infotype *X)
{
    address P;
    DelFirst(L, &P);
    *X = Info(P);
    Dealokasi(P);
}

void DelVLast(List *L, infotype *X)
{
    address P;
    DelLast(L, &P);
    *X = Info(P);
    Dealokasi(P);
}

void InsertFirst(List *L, address P)
{
    if (IsEmpty(*L))
    {
        First(*L) = P;
        Last(*L) = P;
    }
    else
        InsertBefore(L, P, First(*L));
}

void InsertLast(List *L, address P)
{
    if (IsEmpty(*L))
        InsertFirst(L, P);
    else
        InsertAfter(L, P, Last(*L));
}

void InsertAfter(List *L, address P, address Prec)
{
    Prev(P) = Prec;
    Next(P) = Next(Prec);
    Next(Prec) = P;
    if (Next(P) == Nil)
        Last(*L) = P;
    else
        Prev(Next(P)) = P;
}

void InsertBefore(List *L, address P, address Succ)
{
    Prev(P) = Prev(Succ);
    Next(P) = Succ;
    Prev(Succ) = P;
    if (Prev(P) == Nil)
        First(*L) = P;
    else
        Next(Prev(P)) = P;
}

void DelFirst(List *L, address *P)
{
    *P = First(*L);
    if (First(*L) == Last(*L))
    {
        First(*L) = Nil;
        Last(*L) = Nil;
    }
    else
    {
        First(*L) = Next(First(*L));
        Prev(First(*L)) = Nil;
    }
}

void DelLast(List *L, address *P)
{
    *P = Last(*L);
    if (First(*L) == Last(*L))
    {
        First(*L) = Nil;
        Last(*L) = Nil;
    }
    else
    {
        Last(*L) = Prev(Last(*L));
        Next(Last(*L)) = Nil;
    }
}

void DelP(List *L, infotype X)
{
    address P = Search(*L, X);
    if (P != Nil)
    {
        if (P == First(*L))
            DelFirst(L, &P);
        else
            DelAfter(L, &P, Prev(P));
    }
}

void DelAfter(List *L, address *Pdel, address Prec)
{
    *Pdel = Next(Prec);
    if (Next(*Pdel) == Nil)
    {
        Next(Prec) = Nil;
        Last(*L) = Prec;
    }
    else
    {
        Next(Prec) = Next(*Pdel);
        Prev(Next(*Pdel)) = Prec;
    }
}

void DelBefore(List *L, address *Pdel, address Succ)
{
    *Pdel = Prev(Succ);
    if (Prev(*Pdel) == Nil)
    {
        Prev(Succ) = Nil;
        First(*L) = Succ;
    }
    else
    {
        Prev(Succ) = Prev(*Pdel);
        Next(Prev(*Pdel)) = Succ;
    }
}

void PrintForward(List L)
{
    address P = First(L);
    printf("[");
    while (P != Nil)
    {
        printf("%d", Info(P));
        if (P != Last(L))
            printf(",");
        P = Next(P);
    }
    printf("]");
}

void PrintBackward(List L)
{
    address P = Last(L);
    printf("[");
    while (P != Nil)
    {
        printf("%d", Info(P));
        if (P != First(L))
            printf(",");
        P = Prev(P);
    }
    printf("]");
}