// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 9 September 2022
// Topik praktikum : Pra-praktikum 2
// Deskripsi       : Mencetak sebuah persegi berdasarkan masukkan n dengan panjang dan lebar 2n-1

#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    for (i = 0; i < (2 * n - 1); i++)
    {
        for (j = 0; j < (2 * n - 1); j++)
        {
            if ((i + j) % 2 == 0) printf("O");
            else printf("X");
        }
        printf("\n");
    }
    return 0;
}