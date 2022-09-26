// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 23 September 2022
// Topik praktikum : Pra-praktikum 4
// Deskripsi       : Implementasi fibonacci.h

#include "fibonacci.h"
#include <stdio.h>
#include <stdlib.h>

void fibonacci1(int n, int *result)
{
    int i;
    int* fiboNumbers = (int *)malloc(sizeof(int) * (n+1));
    for (i = 0; i <= n; i++)
    {
        if (i == 0) fiboNumbers[i] = 1;
        else if(i == 1) fiboNumbers[i] = 1;
        else fiboNumbers[i] = fiboNumbers[i - 1] + fiboNumbers[i - 2];
    }
    *result = fiboNumbers[n];

    // Shortcut:
    // *result = fibonacci2(n);
}

int fibonacci2(int n)
{
    int i;
    int* fiboNumbers = (int *)malloc(sizeof(int) * (n+1));
    for (i = 0; i <= n; i++)
    {
        if (i == 0) fiboNumbers[i] = 1;
        else if(i == 1) fiboNumbers[i] = 1;
        else fiboNumbers[i] = fiboNumbers[i - 1] + fiboNumbers[i - 2];
    }
    return fiboNumbers[n];
}

void fibonacci3(int n, int *result)
{
    // Gak pake malloc karena address dah disediain dari driver
    int i;
    for (i = 0; i <= n; i++)
    {
        if (i == 0) *(result) = 1;
        else if(i == 1) *(result + i) = 1;
        else *(result + i) = *(result + i - 1) + *(result + i - 2);
    }

    /* Alt:
       int i;
       for (i = 0; i <= n; i++) {
           *(result + i) = fibonacci2(i);
       }
    */
}