// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 6 November 2022
// Topik praktikum : Pra-praktikum 9
// Deskripsi       : Implementasi dari listlinier.h

#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"
#include "listlinier.h"

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
    address P;
    P = (address)malloc(sizeof(ElmtList));
    if (P != Nil)
    {
        Info(P) = X;
        Next(P) = Nil;
    }
    return P;
}

void Dealokasi(address *P)
{
    free(*P);
}

address Search(List L, infotype X)
{
    address P = First(L);
    boolean isFound = false;
    while (P != Nil && !isFound)
    {
        if (Info(P) == X)
            isFound = true;
        else
            P = Next(P);
    }
    return P;
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
    Dealokasi(&P);
}

void DelVLast(List *L, infotype *X)
{
    address P;
    DelLast(L, &P);
    *X = Info(P);
    Dealokasi(&P);
}

void InsertFirst(List *L, address P)
{
    Next(P) = First(*L);
    First(*L) = P;
}

void InsertAfter(List *L, address P, address Prec)
{
    Next(P) = Next(Prec);
    Next(Prec) = P;
}

void InsertLast(List *L, address P)
{

    if (IsEmpty(*L))
        InsertFirst(L, P);
    else
    {
        address last = First(*L);
        while (Next(last) != Nil)
            last = Next(last);
        InsertAfter(L, P, last);
    }
}

void DelFirst(List *L, address *P)
{
    *P = First(*L);
    First(*L) = Next(*P);
    Next(*P) = Nil;
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
                Prec = Next(Prec);
            DelAfter(L, &P, Prec);
        }
    }
}

void DelLast(List *L, address *P)
{
    address last = First(*L);
    address Prec = Nil;
    while (Next(last) != Nil)
    {
        Prec = last;
        last = Next(last);
    }

    *P = last;
    if (Prec == Nil)
        First(*L) = Nil;
    else
        Next(Prec) = Nil;
}

void DelAfter(List *L, address *Pdel, address Prec)
{
    *Pdel = Next(Prec);
    if (Next(Prec) != Nil)
    {
        Next(Prec) = Next(Next(Prec));
        Next(*Pdel) = Nil;
    }
}

void PrintInfo(List L)
{
    address P;
    printf("[");
    if (!IsEmpty(L))
    {
        P = First(L);
        while (P != Nil)
        {
            if (P != First(L))
                printf(",");
            printf("%d", Info(P));
            P = Next(P);
        }
    }
    printf("]");
}

int NbElmt(List L)
{
    int count = 0;
    address P = First(L);
    while (P != Nil)
    {
        P = Next(P);
        count++;
    }
    return count;
}

infotype Max(List L)
{
    address P = First(L);
    infotype max = Info(P);
    while (Next(P) != Nil)
    {
        P = Next(P);
        if (Info(P) > max)
            max = Info(P);
    }
    return max;
}

address AdrMax(List L)
{
    address P = First(L);
    address addrMax = First(L);
    infotype max = Info(P);
    while (Next(P) != Nil)
    {
        P = Next(P);
        if (Info(P) > max)
        {
            max = Info(P);
            addrMax = P;
        }
    }
    return addrMax;
}

infotype Min(List L)
{
    address P = First(L);
    infotype min = Info(P);
    while (Next(P) != Nil)
    {
        P = Next(P);
        if (Info(P) < min)
            min = Info(P);
    }
    return min;
}

address AdrMin(List L)
{
    address P = First(L);
    address addrMin = First(L);
    infotype min = Info(P);
    while (Next(P) != Nil)
    {
        P = Next(P);
        if (Info(P) < min)
        {
            min = Info(P);
            addrMin = P;
        }
    }
    return addrMin;
}

float Average(List L)
{
    address P = First(L);
    int count = 0, total = 0;
    while (P != Nil)
    {
        total += Info(P);
        count++;
        P = Next(P);
    }
    return (float)total / count;
}

void InversList(List *L)
{
    address P = First(*L);
    address loc = P;
    address Prec = Next(P);
    while (Prec != Nil)
    {
        loc = Prec;
        Prec = Next(Prec);
        InsertFirst(L, loc);
        Next(P) = Prec;
    }
}

void Konkat1(List *L1, List *L2, List *L3)
{
    address lastL1 = First(*L1);
    CreateEmpty(L3);
    if (IsEmpty(*L1))
        First(*L3) = First(*L2);
    else
    {
        First(*L3) = First(*L1);
        while (Next(lastL1) != Nil)
            lastL1 = Next(lastL1);
        Next(lastL1) = First(*L2);
    }
    CreateEmpty(L1);
    CreateEmpty(L2);
}