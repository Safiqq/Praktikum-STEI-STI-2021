// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 9 September 2022
// Topik praktikum : Pra-praktikum 2
// Deskripsi       : Menentukan apakah kedua string memiliki panjang dan isi yang sama

#include <stdio.h>

int main()
{
    int i, checker = 1;
    char kata1[99], kata2[99];
    for (i = 0; i < 99; i++)
    {
        kata1[i] = '0';
        kata2[i] = '0';
    }
    scanf("%s", kata1);
    scanf("%s", kata2);
    for (i = 0; i < 99; i++)
    {
        if ((int)kata1[i] != (int)kata2[i] && ((int)kata1[i]) + 32 != (int)kata2[i] && ((int)kata1[i]) - 32 != (int)kata2[i])
        {
            checker = 0;
        }
    }
    if (checker == 1) printf("Ya\n");
    else printf("Tidak\n");
    return 0;
}