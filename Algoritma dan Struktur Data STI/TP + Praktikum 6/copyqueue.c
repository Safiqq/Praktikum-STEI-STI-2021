// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 17 Oktober 2022
// Topik praktikum : Praktikum 6
// Deskripsi       : Implementasi dari copyqueue.h

#include "copyqueue.h"

void copyQueue(Queue *queueInput, Queue *queueOutput)
{
	CreateQueue(queueOutput);
	if (!isEmpty(*queueInput))
	{
		int i, temp, len = length(*queueInput), tempH = IDX_HEAD(*queueInput), tempT = IDX_TAIL(*queueInput);
		Queue q;
		IDX_HEAD(q) = (tempH - 1) % CAPACITY;
		IDX_TAIL(q) = (tempH - 1) % CAPACITY;
		for (i = 0; i < len; i++)
		{
			dequeue(queueInput, &temp);
			enqueue(&q, temp);
		}
		IDX_HEAD(q) = tempH;
		IDX_TAIL(q) = tempT;
		IDX_HEAD(*queueInput) = (tempH - 1) % CAPACITY;
		IDX_TAIL(*queueInput) = (tempH - 1) % CAPACITY;
		IDX_HEAD(*queueOutput) = (tempH - 1) % CAPACITY;
		IDX_TAIL(*queueOutput) = (tempH - 1) % CAPACITY;
		for (i = 0; i < len; i++)
		{
			dequeue(&q, &temp);
			enqueue(queueInput, temp);
			enqueue(queueOutput, temp);
		}
		IDX_HEAD(*queueInput) = tempH;
		IDX_TAIL(*queueInput) = tempT;
		IDX_HEAD(*queueOutput) = tempH;
		IDX_TAIL(*queueOutput) = tempT;
	}
}