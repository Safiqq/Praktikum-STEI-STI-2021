// NIM      : 18221048
// Nama     : Syafiq Ziyadul Arifin
// No. Soal : 3

#include <stdio.h>

void Holoh3ro(char *inp)
{
    int a, c, res;
    char b, key;

    res = sscanf(inp, "%d %c %d", &a, &b, &c);

    if (res < 3) illegal_move();

    switch (a) {
    case 0:
        key = 'i';
        if (c != 0x1aa) // 0x1aa = 426
        {
            illegal_move();
            key = 'i';
        }
        break;
    case 1:
        key = 'e';
        if (c != 0x244) // 0x244 = 580
        {
            illegal_move();
            key = 'e';
        }
        break;
    case 2:
        key = 'o';
        if (c != 0x1ee) // 0x1ee = 494
        {
            illegal_move();
            key = 'o';
        }
        break;
    case 3:
        key = 'i';
        if (c != -0x81) // -0x81 = -129
        {
            illegal_move();
            key = 'i';
        }
        break;
    case 4:
        key = 'p';
        if (c != 0x283) // 0x283 = 643
        {
            illegal_move();
            key = 'p';
        }
        break;
    case 5:
        key = 'q';
        if (c != 0x3a3) // 0x3a3 = 931
        {
            illegal_move();
            key = 'q';
        }
        break;
    case 6:
        if (c != 0x2a9) // 0x2a9 = 681
        {
            illegal_move();
            goto L19;
        }
LAB_0001187e:
    illegal_move();

    default:
switchD_000117b6_caseD_8:
    illegal_move();
            key = 'q';
            break;
    case 7:
L19:
    // 0x44 = 68
    if (c != 0x44) goto LAB_0001187e;
        goto switchD_000117b6_caseD_8;
    }
    if (b != key) illegal_move();
}

// Possible answer(s):
// 0 i 426
// 1 e 580
// 2 o 494
// 3 i -129
// 4 p 643
// 5 q 931