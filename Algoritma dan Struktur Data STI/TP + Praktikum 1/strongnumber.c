// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 5 September 2022
// Topik praktikum : Praktikum 1
// Deskripsi       : Program menentukan bilangan strong number

#include <stdio.h>

int main()
{
    int angka, satuan, temp, i;
    int faktortotal = 0, faktor = 1;
    scanf("%d", &angka);
    temp = angka;
    while (angka > 9)
    {
        satuan = angka % 10;
        for (i = satuan; i > 0; i--)
        {
            faktor *= i;
        }
        faktortotal += faktor;
        faktor = 1;
        angka /= 10;
    }
    for (i = angka; i > 0; i--)
    {
        faktor *= i;
    }
    faktortotal += faktor;
    
    if (faktortotal == temp) printf("Y");
    else printf("N");
    printf("\n");
}