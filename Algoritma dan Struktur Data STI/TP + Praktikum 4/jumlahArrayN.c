// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 26 September 2022
// Topik praktikum : Praktikum 4
// Deskripsi       : Hitunglah penjumlahan bilangan dari posisi l (di array N) sampai posisi ke r (sebanyak q kali)

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N, i, q, count;
	int *arrN;

	scanf("%d", &N);

	// Pakai malloc karena ukuran array dari variabel (bukan angka eksak)
	arrN = (int *)malloc(sizeof(int) * N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &arrN[i]);
	}

	scanf("%d", &q);
	for (i = 0; i < q; i++)
	{
		int l, r;
		count = 0;
		
		scanf("%d %d", &l, &r);
		for (l; l <= r; l++)
		{
			// Gunakan formula (l - 1) % N agar indeksnya berulang
			// e.g. (0, 1, 2, 0, 1, 2, ...) untuk N = 3
			count += arrN[(l - 1) % N];
		}
		printf("%d\n", count);
	}
	return 0;
}