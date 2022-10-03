// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 2 Oktober 2022
// Topik praktikum : Pra-praktikum 5
// Deskripsi       : Implementasi fungsi hitungkarakter

#include "mesinkarakter.h"

char currentChar;
boolean EOP;

int hitungkarakter(char karakter)
{
    int count = 0;
    START();
    currentChar = GetCC();
    while (!IsEOP())
    {
        if (currentChar == karakter) count++;
        ADV();
        currentChar = GetCC();
    }
    return count;
}