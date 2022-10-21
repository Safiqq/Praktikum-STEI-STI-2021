// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 15 Oktober 2022
// Topik praktikum : Pra-praktikum 6
// Deskripsi       : Implementasi dari circular_queue.h

#include <stdlib.h>
#include "circular_queue.h"

boolean IsEmpty(Queue Q)
{
    return Q.HEAD == NIL && Q.TAIL == NIL;
}

boolean IsFull(Queue Q)
{
    return Length(Q) == MaxLength(Q);
}

int Length(Queue Q)
{
    if (IsEmpty(Q)) return 0;
    else if (Q.TAIL >= Q.HEAD)
        return Q.TAIL - Q.HEAD + 1;
    else
        return Q.TAIL - Q.HEAD + Q.MaxEl + 1;
}

int MaxLength(Queue Q)
{
    return Q.MaxEl;
}

Queue CreateQueue(int Max)
{
    Queue Q;
    if ((Q.Tab = (ElType *)malloc(sizeof(ElType) * Max)) == NULL)
        Q.MaxEl = 0;
    else
        Q.MaxEl = Max;
    Q.HEAD = NIL;
    Q.TAIL = NIL;
    return Q;
}

void DeleteQueue(Queue *Q)
{
    Q->MaxEl = 0;
    free(Q->Tab);
}

void Push(Queue *Q, ElType X)
{
    if (IsEmpty(*Q))
    {
        Q->HEAD = 0;
        Q->TAIL = 0;
    }
    else
    {
        Q->TAIL++;
        Q->TAIL %= Q->MaxEl;
    }
    Q->Tab[Q->TAIL] = X;
}

ElType Pop(Queue *Q)
{
    ElType val = Front(*Q);
    if (Q->HEAD == Q->TAIL)
    {
        Q->HEAD = NIL;
        Q->TAIL = NIL;
    }
    else
    {
        Q->HEAD++;
        Q->HEAD %= Q->MaxEl;
    }
    return val;
}

ElType Front(Queue Q)
{
    return Q.Tab[Q.HEAD];
}