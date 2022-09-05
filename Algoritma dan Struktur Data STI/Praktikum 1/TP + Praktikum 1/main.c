// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 4 September 2022
// Topik praktikum : Pra-praktikum 1
// Deskripsi       : Konversi detik ke format jam, menit, dan detik

#include <stdio.h>

int main()
{
    int detik;
    scanf("%d", &detik);
    printf("%d detik = %d jam %d menit %d detik\n", detik, detik / 3600, detik / 60 % 60, detik % 60);
    return 0;
}