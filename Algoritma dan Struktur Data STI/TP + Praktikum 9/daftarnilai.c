// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 6 November 2022
// Topik praktikum : Pra-praktikum 9
// Deskripsi       : Program mengelola statistik daftar nilai sebuah
//                   mata kuliah

#include <stdio.h>
#include "boolean.h"
#include "listlinier.h"

int main()
{
    int input;
    List nilai;
    boolean isValid = true;
    CreateEmpty(&nilai);
    while (isValid)
    {
        scanf("%d", &input);
        if (input >= 0 && input <= 100)
            InsVFirst(&nilai, input);
        else
            isValid = false;
    }

    if (NbElmt(nilai) > 0)
    {
        printf("%d\n%d\n%d\n%.2f\n", NbElmt(nilai), Max(nilai), Min(nilai), Average(nilai));
        InversList(&nilai);
        PrintInfo(nilai);
        printf("\n");
        InversList(&nilai);
        PrintInfo(nilai);
        printf("\n");
    }
    else
        printf("Daftar nilai kosong\n");
    return 0;
}