// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 17 Oktober 2022
// Topik praktikum : Praktikum 6
// Deskripsi       : Implementasi dari tanpaBomb.h

#include "tanpaBomb.h"

Queue tanpaBomb(Queue queue, ElType bomb)
{
	int i, len = length(queue), temp;
	Queue q;
	CreateQueue(&q);
	for (i = 0; i < len; i++)
	{
		dequeue(&q, &temp);
		if (temp != bomb) enqueue(&q, temp);
	}
	return q;
}