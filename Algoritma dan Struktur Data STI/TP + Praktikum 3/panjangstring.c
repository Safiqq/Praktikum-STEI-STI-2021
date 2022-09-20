// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 16 September 2022
// Topik praktikum : Pra-praktikum 3
// Deskripsi       : Implementasi fungsi panjangString yang akan mengeluarkan panjang dari string

#include "panjangstring.h"

int panjangString(char *x)
{
    int count = 0;
    while (*x != '\0')
    {
        count += 1;
        x += 1;
    }
    return count;
}