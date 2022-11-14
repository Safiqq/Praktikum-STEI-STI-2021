// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 13 November 2022
// Topik praktikum : Pra-praktikum 10
// Deskripsi       : Implementasi dari listsirkuler.h

#include <stdio.h>
#include <stdlib.h>
#include "listsirkuler.h"

boolean IsEmpty(List L)
{
    return First(L) == Nil;
}

void CreateEmpty(List *L)
{
    First(*L) = Nil;
}

address Alokasi(infotype X)
{
    address P = (ElmtList *)malloc(sizeof(ElmtList));
    if (P != Nil)
    {
        Info(P) = X;
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
    address P = First(L);
    boolean isFound = P == Nil;
    if (!isFound)
    {
        while (Next(P) != First(L) && Info(P) != X)
        {
            P = Next(P);
        }
        isFound = Info(P) == X;
    }
    return isFound ? P : Nil;
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
        Next(P) = P;
    else
    {
        address Last = First(*L);
        while (Next(Last) != First(*L))
        {
            Last = Next(Last);
        }
        Next(P) = First(*L);
        Next(Last) = P;
    }
    First(*L) = P;
}

void InsertLast(List *L, address P)
/* I.S. Sembarang, P sudah dialokasi  */
/* F.S. P ditambahkan sebagai elemen terakhir yang baru */
{
    if (IsEmpty(*L))
        InsertFirst(L, P);
    else
    {
        address Last = First(*L);
        while (Next(Last) != First(*L))
        {
            Last = Next(Last);
        }
        InsertAfter(L, P, Last);
    }
}

void InsertAfter(List *L, address P, address Prec)
/* I.S. Prec pastilah elemen list dan bukan elemen terakhir, */
/*      P sudah dialokasi  */
/* F.S. Insert P sebagai elemen sesudah elemen beralamat Prec */
{
    Next(P) = Next(Prec);
    Next(Prec) = P;
}

void DelFirst(List *L, address *P)
{

    *P = First(*L);
    if (Next(First(*L)) == First(*L))
        First(*L) = Nil;
    else
    {
        address Last = First(*L);
        while (Next(Last) != First(*L))
        {
            Last = Next(Last);
        }
        First(*L) = Next(First(*L));
        Next(Last) = First(*L);
    }
}

void DelLast(List *L, address *P)
{
    address Last = First(*L), Prec = Nil;
    while (Next(Last) != First(*L))
    {
        Prec = Last;
        Last = Next(Last);
    }
    *P = Last;
    if (Prec == Nil)
        First(*L) = Nil;
    else
        Next(Prec) = First(*L);
}

void DelAfter(List *L, address *Pdel, address Prec)
{
    *Pdel = Next(Prec);
    Next(Prec) = Next(*Pdel);
    Next(*Pdel) = Nil;
}

void DelP(List *L, infotype X)
{
    address P = Search(*L, X);
    if (P != Nil)
    {
        if (P == First(*L))
            DelFirst(L, &P);
        else
        {
            address Prec = First(*L);
            while (Next(Prec) != P)
            {
                Prec = Next(Prec);
            }
            DelAfter(L, &P, Prec);
        }
        Dealokasi(P);
    }
}

void PrintInfo(List L)
{
    address P = First(L);
    printf("[");
    do
    {
        printf("%d", Info(P));
        P = Next(P);
        if (P != First(L))
            printf(",");
    } while (P != First(L));
    printf("]");
}