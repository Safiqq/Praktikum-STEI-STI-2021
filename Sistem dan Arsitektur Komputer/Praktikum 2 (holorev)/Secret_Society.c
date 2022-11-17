// NIM      : 18221048
// Nama     : Syafiq Ziyadul Arifin
// No. Soal : 4

#include <stdio.h>

void Secret_Society(char *inp)
{
    int a, b, res;

    res = sscanf(inp, "%d %d", &a, &b);

    // 0x13af = 5039
    if (((res != 2) || (a > 0x13af)) || (b > 0x13af))
        illegal_move();

    res = func4(a, b);
    // 0x14 = 5040
    if ((b * a) / res != 0x14) illegal_move();
}

// Possible answer(s):
// 1008 5
// 720 7
// 560 9
// 144 35
// 112 45
// 80 63