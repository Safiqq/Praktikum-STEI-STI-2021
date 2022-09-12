// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 9 September 2022
// Topik praktikum : Pra-praktikum 2
// Deskripsi       : Menjumlahkan semua digit bilangan dalam input integer

#include <stdio.h>

int main()
{
    int a, i, jumlah = 0;
    scanf("%d", &a);
    while (a > 0)
    {
        jumlah += a % 10;
        a /= 10;
    }
    printf("%d\n", jumlah);
    return 0;
}