// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 7 November 2022
// Topik praktikum : Praktikum 9
// Deskripsi       : Program mengembalikan list linier baru dengan elemen unik

#include <stdio.h>
#include "removeDuplicate.h"

List removeDuplicate(List l)
{
    List lu;
    address P = First(l);
    CreateEmpty(&lu);
    while (P != Nil)
    {
        if (Search(lu, Info(P)) == Nil)
            InsVLast(&lu, Info(P));
        else
            P = Next(P);
    }
    return lu;
}