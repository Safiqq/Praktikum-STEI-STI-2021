// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 4 September 2022
// Topik praktikum : Praktikum 1
// Deskripsi       : Program bilangan subset genap

#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (1 <= a <= 100)
    {
        if (a % 2 == 0 && a != 2) printf("Ya");
        else printf("Tidak");
    }
    printf("\n");
    return 0;
}