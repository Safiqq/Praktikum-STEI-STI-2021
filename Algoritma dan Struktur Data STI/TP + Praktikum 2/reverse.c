// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 12 September 2022
// Topik praktikum : Praktikum 2
// Deskripsi       : Program reverse suatu bilangan integer positif

#include <stdio.h>

int main()
{
	int angka;
	scanf("%d", &angka);
	while (angka > 9)
	{
		printf("%d", angka % 10);
		angka /= 10;
	}
	printf("%d\n", angka);
	return 0;
}