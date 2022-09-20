// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 19 September 2022
// Topik praktikum : Praktikum 3
// Deskripsi       : Implementasi garis.h

#include "garis.h"
#include <stdio.h>
#include <math.h>

void MakeGARIS(POINT P1, POINT P2, GARIS *L)
{
	PAwal(*L) = P1;
	PAkhir(*L) = P2;
}

void BacaGARIS(GARIS *L)
{
	POINT P1, P2;
	while (true)
	{
		BacaPOINT(&P1);
		BacaPOINT(&P2);
		if (EQ(P1, P2)) printf("Garis tidak valid\n");
		else break;
	}
	PAwal(*L) = P1;
	PAkhir(*L) = P2;
}

void TulisGARIS(GARIS L)
{
	printf("((%.2f,%.2f),(%.2f,%.2f))", PAwal(L).X, PAwal(L).Y, PAkhir(L).X, PAkhir(L).Y);
}

float PanjangGARIS(GARIS L)
{
	// Menghitung panjang garis dengan rumus = sqrt((x1-x2)**2 + (y1-y2)**2)
	return Panjang(PAwal(L), PAkhir(L));
}

float Gradien(GARIS L)
{
	return (PAkhir(L).Y - PAwal(L).Y) / (PAkhir(L).X - PAwal(L).X);
}

boolean IsTegakLurus(GARIS L1, GARIS L2)
{
	return Gradien(L1) * Gradien(L2) == -1;
}

boolean IsSejajar(GARIS L1, GARIS L2)
{
	return Gradien(L1) == Gradien(L2);
}