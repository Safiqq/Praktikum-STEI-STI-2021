// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 15 Oktober 2022
// Topik praktikum : Pra-praktikum 6
// Deskripsi       : Implementasi dari reverse.h

#include "reverse.h"

void transferReverse(Queue *q1, Queue *q2)
{
    int i, temp, tempH = q1->HEAD, tempT = q1->TAIL, length = Length(*q1);
    q2->TAIL = q1->TAIL - 1;
    for (i = 0; i < length; i++)
    {
        temp = Pop(q1);
        Push(q2, temp);
        q2->TAIL -= 2;
    }
    q2->HEAD = tempH;
    q2->TAIL = tempT;
}
