// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 17 Oktober 2022
// Topik praktikum : Praktikum 6
// Deskripsi       : Hitung jumlah masakan yang disajikan, waktu
//                   minimal yang dibutuhkan, dan waktu maksimal yang
//                   dibutuhkan pada 1 hari tertentu oleh Ibu Gra

#include <stdio.h>
#include "queue.h"

int main()
{
	Queue q;
	CreateQueue(&q);
	int inp, count = 0, t, tMin = 0, tMax = 0;
	scanf("%d", &inp);
	while (inp != 0)
	{
		if (inp == 1)
		{
			scanf("%d", &t);
			if (!isFull(q) && t > 0) enqueue(&q, t);
		}
		else if (inp == 2)
		{
			if (!isEmpty(q))
			{
				dequeue(&q, &t);
				count++;
				if (tMin == 0 || tMin > t) tMin = t;
				if (tMax == 0 || tMax < t) tMax = t;
			}
		}
		scanf("%d", &inp);
	}
	printf("%d\n%d\n%d\n", count, tMin, tMax);
}