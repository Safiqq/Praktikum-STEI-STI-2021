// NIM				: 18221048
// Nama				: Syafiq Ziyadul Arifin
// Tanggal			: 12 September 2022
// Topik praktikum	: Praktikum 2
// Deskripsi		: Program hitung jumlah total bilangan cantik dalam rentang 1 sampai M sebanyak N test case

#include <stdio.h>

int cariAngka7(int angka)
{
	int temp = angka;
	while (angka > 0)
	{
		if (angka % 10 == 7)
		{
			return temp;
		}
		angka /= 10;
	}
	return 0;
}

int main()
{
	int i, j, N, M, jumlah;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &M);
		jumlah = 0;
		for (j = 1; j <= M; j++)
		{
			if (j % 7 == 0)
				jumlah += j;
			else
				jumlah += cariAngka7(j);
		}
		printf("%d\n", jumlah);
	}
	return 0;
}
