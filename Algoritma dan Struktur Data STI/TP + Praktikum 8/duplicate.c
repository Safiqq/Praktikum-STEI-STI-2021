// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 31 Oktober 2022
// Topik praktikum : Praktikum 8
// Deskripsi       : Implementasi dari duplicate.h

#include "duplicate.h"

Set arrToSet(int *arr, int arrSize)
{
	int i;
	Set S;
	CreateEmpty(&S);
	for (i = 0; i < arrSize; i++)
	{
		Insert(&S, arr[i]);
	}
	return S;
}

void removeDuplicateDesc(int *arr, int arrSize, int *arrRes, int *arrResSize)
{
	int i, j, temp;
	Set S = arrToSet(arr, arrSize);
	for (i = 0; i < S.Count; i++)
	{
		arrRes[i] = S.Elements[i];
	}
	*arrResSize = S.Count;

	// Sort set secara descending
	for (i = 0; i < S.Count; i++)
	{
		for (j = i; j < S.Count; j++)
		{
			if (arrRes[i] < arrRes[j])
			{
				temp = arrRes[i];
				arrRes[i] = arrRes[j];
				arrRes[j] = temp;
			}
		}
	}
}
