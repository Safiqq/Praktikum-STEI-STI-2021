// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 15 Oktober 2022
// Topik praktikum : Pra-praktikum 6
// Deskripsi       : Implementasi dari queue.h

#include <stdio.h>
#include "queue.h"

void CreateQueue(Queue *q)
{
    IDX_HEAD(*q) = IDX_UNDEF;
    IDX_TAIL(*q) = IDX_UNDEF;
}

boolean isEmpty(Queue q)
{
    return IDX_HEAD(q) == IDX_UNDEF && IDX_TAIL(q) == IDX_UNDEF;
}

boolean isFull(Queue q)
{
    if (IDX_TAIL(q) >= IDX_HEAD(q))
        return IDX_TAIL(q) - IDX_HEAD(q) == CAPACITY - 1;
    else
        return IDX_HEAD(q) - IDX_TAIL(q) == 1;
}

int length(Queue q)
{
    if (isEmpty(q)) return 0;
    else if (IDX_TAIL(q) >= IDX_HEAD(q))
        return IDX_TAIL(q) - IDX_HEAD(q) + 1;
    else
        return IDX_TAIL(q) - IDX_HEAD(q) + CAPACITY + 1;
}

void enqueue(Queue *q, ElType val)
{
    if (isEmpty(*q))
    {
        IDX_HEAD(*q) = 0;
        IDX_TAIL(*q) = 0;
    }
    else
    {
        IDX_TAIL(*q)++;
        IDX_TAIL(*q) %= CAPACITY;
    }
    TAIL(*q) = val;
}

void dequeue(Queue *q, ElType *val)
{
    *val = HEAD(*q);
    if (IDX_HEAD(*q) == IDX_TAIL(*q))
    {
        IDX_HEAD(*q) = IDX_UNDEF;
        IDX_TAIL(*q) = IDX_UNDEF;
    }
    else
    {
        IDX_HEAD(*q)++;
        IDX_HEAD(*q) %= CAPACITY;
    }
}

void displayQueue(Queue q)
{
    int i, len = length(q);
    printf("[");
    for (i = 0; i < len; i++)
    {
        printf("%d", q.buffer[(i + IDX_HEAD(q)) % CAPACITY]);
        if (i < (len - 1)) printf(",");
    }
    printf("]\n");
}