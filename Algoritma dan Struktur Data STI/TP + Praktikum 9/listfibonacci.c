// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 7 November 2022
// Topik praktikum : Praktikum 9
// Deskripsi       : Program list fibonacci dengan 2 elemen pertama
//                   sebagai masukan

#include "listlinier.h"

int main()
{
    List fibonacci;
    address P1, P2;
    infotype i = 2, el, x1, x2;
    CreateEmpty(&fibonacci);
    scanf("%d", &el);
    if (el == 1)
    {
        scanf("%d", &x1);
        InsVFirst(&fibonacci, x1);
    }
    else if (el > 1)
    {
        scanf("%d %d", &x1, &x2);
        InsVFirst(&fibonacci, x1);
        InsVLast(&fibonacci, x2);
        P1 = First(fibonacci);
        P2 = Next(P1);
        while (i < el)
        {
            InsVLast(&fibonacci, Info(P1) + Info(P2));
            P1 = Next(P1);
            P2 = Next(P2);
            i++;
        }
    }
    PrintInfo(fibonacci);
    return 0;
}