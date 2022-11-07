// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 7 November 2022
// Topik praktikum : Praktikum 9
// Deskripsi       : Program implementasi cache dengan skema
//                   LRU (Least Recently Used)

#include <stdio.h>
#include "listlinier.h"

int main()
{
    List L;
    address tempP;
    int i, N, Q, temp, tempDel;
    CreateEmpty(&L);
    scanf("%d %d", &N, &Q);
    for (i = 1; i <= N; i++)
        InsVLast(&L, i);
    for (i = 0; i < Q; i++)
    {
        scanf("%d", &temp);
        tempP = Search(L, temp);
        if (tempP == Nil)
        {
            printf("miss ");
            DelVLast(&L, &tempDel);
        }
        else
        {
            printf("hit ");
            DelP(&L, temp);
        }
        InsVFirst(&L, temp);
        PrintInfo(L);
        printf("\n");
    }
    return 0;
}