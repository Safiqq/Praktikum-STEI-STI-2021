// NIM  : 18221048
// Nama : Syafiq Ziyadul Arifin

#include <stdio.h>

// Poin 1
int gura(int x, int y)
{
    return ~(~x & ~y);
}

// Poin 1
int rushia(void)
{
    return 1 << 31;
}

// Poin 2
unsigned int kobokan(unsigned int x, unsigned int n)
{
    return x & ~(~(1 << n) + 1);
}

// Poin 2
int fauna(int x, int n)
{
    return x >> (n << 3) & 0xFF;
}

// Poin 3
int yamada(int x)
{
    return !((x + ~135 + 1 >> 31) & 0x1) & ((x + ~182 >> 31) & 0x1);
}

// Poin 3
int pekora(int x)
{
    return (x & 0xFF) << 24 | (x & (0xFF << 8)) << 8 | (x & (0xFF << 16)) >> 8 | (x >> 24) & 0xFF;
}

// Poin 3
int mumei(int x, int n)
{
    return (x >> n) & ~(((1 << 31) >> n) << 1);
}

// Poin 4
int moona(int x)
{
    x = (x & (~x + 1)) + ~0;
    x = ((x >> 1) & 0x55555555) + (x & 0x55555555);
    x = ((x >> 2) & 0x33333333) + (x & 0x33333333);
    x = ((x >> 4) & 0x0F0F0F0F) + (x & 0x0F0F0F0F);
    x = ((x >> 8) & 0x00FF00FF) + (x & 0x00FF00FF);
    return ((x >> 16) + (x & 0x0000FFFF));
}

// Poin 4
unsigned int ollie(unsigned int a)
{
    a = (a & 31) + ((a >> 5) << 1);
    a = (a & 31) + ((a >> 5) << 1);
    a = (a & 31) + ((a >> 5) << 1);
    a = (a & 31) + ((a >> 5) << 1);
    a = (a & 31) + ((a >> 5) << 1);
    a = (a & 31) + ((a >> 5) << 1);
    a = (a & 31) + ((a >> 5) << 1);
    return a + 1 + ~(30 & (((a + ~29) >> 31) & 1) + ~0);
    // if < 30 di & sama 0x0, else di & sama 0xFFFFFFFF
}

// Poin 4
unsigned coco(unsigned uf)
{
    int x = uf & (0x80 << 24);
    int y = (0x7F << 24) | (0x80 << 16);
    int z = uf & y;
    if (!z)
        uf = (uf << 1) | x;
    else if (z != y)
        uf += (1 << 23);
    return uf;
}