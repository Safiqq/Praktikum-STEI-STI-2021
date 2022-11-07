// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 6 November 2022
// Topik praktikum : Pra-praktikum 9
// Deskripsi       : Implementasi dari OddEvenList.h

#include <stdio.h>
#include <stdlib.h>
#include "listlinier.h"
#include "OddEvenList.h"

void SortList(List *L)
{
    address P, tempP;
    infotype temp;
    P = First(*L);
    while (P != Nil)
    {
        tempP = Next(P);
        while (tempP != Nil)
        {
            if (Info(P) > Info(tempP))
            {
                temp = Info(P);
                Info(P) = Info(tempP);
                Info(tempP) = temp;
            }
            tempP = Next(tempP);
        }
        P = Next(P);
    }
}

void OddEvenList(List L, List *Odd, List *Even)
{
    address P = First(L), tempP;
    CreateEmpty(Odd);
    CreateEmpty(Even);
    while (P != Nil)
    {
        if (Info(P) % 2 == 0)
            InsVLast(Even, Info(P));
        else
            InsVLast(Odd, Info(P));
        P = Next(P);
    }
    SortList(Odd);
    SortList(Even);
}