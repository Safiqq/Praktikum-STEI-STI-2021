// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 5 September 2022
// Topik praktikum : Praktikum 1
// Deskripsi       : Program hitung banyaknya frekuensi angka 0-9

#include <stdio.h>

int main()
{
    char karakter[10];
    char frekuensi[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int i;
    scanf("%s", karakter);
    for (i = 0; i < 10; i++)
    {
        if (karakter[i] == '0') frekuensi[0]++;
        else if (karakter[i] == '1') frekuensi[1]++;
        else if (karakter[i] == '2') frekuensi[2]++;
        else if (karakter[i] == '3') frekuensi[3]++;
        else if (karakter[i] == '4') frekuensi[4]++;
        else if (karakter[i] == '5') frekuensi[5]++;
        else if (karakter[i] == '6') frekuensi[6]++;
        else if (karakter[i] == '7') frekuensi[7]++;
        else if (karakter[i] == '8') frekuensi[8]++;
        else if (karakter[i] == '9') frekuensi[9]++;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d", frekuensi[i]);
    }
    printf("\n");
    return 0;
}