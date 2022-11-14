// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 13 November 2022
// Topik praktikum : Pra-praktikum 10
// Deskripsi       : Program untuk mengetahui elemen ke-N dari sebuah list

#include <stdio.h>
#include "listsirkuler.h"

int ElemenKeN(List L, int r)
{
    int i = 0;
    address P = First(L);
    while (i < r)
    {
        P = Next(P);
        i++;
    }
    return Info(P);
}

int main()
{
    List L;
    int r;
    scanf("%d", &r);
    if (r)
    {
        while (r)
        {
            InsVLast(&L, r);
            scanf("%d", &r);
        }
        scanf("%d", &r);
        printf("%d\n", ElemenKeN(L, r));
    }
    else
        printf("List Kosong\n");
    return 0;
}