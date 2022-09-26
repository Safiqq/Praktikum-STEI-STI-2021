// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 26 September 2022
// Topik praktikum : Praktikum 4
// Deskripsi       : Implementasi dari MinMax.h

#include <stdio.h>
#include "list.h"
#include "MinMax.h"

IdxType IdxMin(List L)
{
	int i, min = L.A[0], temp = 0;
	for (i = FirstIdx(L); i <= LastIdx(L); i++)
	{
		if (min > L.A[i])
		{
			min = L.A[i];
			temp = i;
		}
	}
	return temp;
}

IdxType IdxMax(List L)
{
	int i, max = L.A[0], temp = 0;
	for (i = FirstIdx(L); i <= LastIdx(L); i++)
	{
		if (max < L.A[i])
		{
			max = L.A[i];
			temp = i;
		}
	}
	return temp;
}

List MinMax(List L)
{
	// Get index nilai minimum beserta nilainya, DELETE element, lalu INSERT di akhir list
	IdxType idxMin = IdxMin(L);
	ElType tempMin = Get(L, idxMin);
	DeleteAt(&L, idxMin);
	InsertLast(&L, tempMin);
	
	IdxType idxMax = IdxMax(L);
	ElType tempMax = Get(L, idxMax);
	DeleteAt(&L, idxMax);
	InsertLast(&L, tempMax);
	return L;
}