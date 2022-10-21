// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 26 September 2022
// Topik praktikum : Praktikum 4
// Deskripsi       : Implementasi dari arrayMhs.h

#include <stdio.h>
#include "arrayMhs.h"

void MakeEmpty(TabMhs *T)
{
	T->Neff = 0;
}

int NbElmt(TabMhs T)
{
	return T.Neff;
}

int MaxNbEl(TabMhs T)
{
	return IdxMax - IdxMin + 1;
}

IdxType GetFirstIdx(TabMhs T)
{
	return IdxMin;
}

IdxType GetLastIdx(TabMhs T)
{
	return T.Neff;
}

ElType GetElmt(TabMhs T, IdxType i)
{
	return T.TI[i];
}

void SetTab(TabMhs Tin, TabMhs *Tout)
{
	int i;
	Tout->Neff = Tin.Neff;
	for (i = IdxMin; i <= Tin.Neff; i++)
	{
		Tout->TI[i] = Tin.TI[i];
	}
}

void SetEl(TabMhs *T, IdxType i, ElType v)
{
	T->TI[i] = v;
	if (i > T->Neff) T->Neff = i;
}

void SetNeff(TabMhs *T, IdxType N)
{
	T->Neff = N;
}

boolean IsIdxValid(TabMhs T, IdxType i)
{
	return i >= IdxMin && i <= IdxMax;
}

boolean IsIdxEff(TabMhs T, IdxType i)
{
	return i >= IdxMin && i <= T.Neff;
}

boolean IsEmpty(TabMhs T)
{
	return T.Neff == 0;
}

boolean IsFull(TabMhs T)
{
	return T.Neff == IdxMax;
}

void TulisIsi(TabMhs T)
{
	if (IsEmpty(T)) printf("Tabel kosong\n");
	else
	{
		int i;
		for (i = IdxMin; i <= T.Neff; i++)
		{
			printf("%s | %s | %.2f\n", T.TI[i].nama, T.TI[i].nim, T.TI[i].nilai);
		}
	}
}

ElType MakeMahasiswa(char *Nama, char *NIM, float Nilai)
{
	ElType M;
	M.nama = Nama;
	M.nim = NIM;
	M.nilai = Nilai;
	return M;
}

float RataRata(TabMhs T)
{
	int i;
	float total = 0;
	for (i = IdxMin; i <= T.Neff; i++)
	{
		total += T.TI[i].nilai;
	}
	return total / (float)T.Neff;
}

float Max(TabMhs T)
{
	int i;
	float max = T.TI[IdxMin].nilai;
	for (i = IdxMin + 1; i <= T.Neff; i++)
	{
		if (max < T.TI[i].nilai) max = T.TI[i].nilai;
	}
	return max;
}

float Min(TabMhs T)
{
	int i;
	float min = T.TI[IdxMin].nilai;
	for (i = IdxMin + 1; i <= T.Neff; i++)
	{
		if (min > T.TI[i].nilai) min = T.TI[i].nilai;
	}
	return min;
}

char *MaxNama(TabMhs T)
{
	int i;
	char *nim = "";
	float max = Max(T);
	for (i = IdxMin; i <= T.Neff; i++)
	{
		if (T.TI[i].nilai == max)
		{
			// Cek apakah <nim> BELUM terisi ATAU <nim> lebih besar dari T.TI[i].nim (cari nim terkecil)
			if (nim[0] == '\0' || nim > T.TI[i].nim) nim = T.TI[i].nim;
		}
	}
	for (i = IdxMin; i <= T.Neff; i++)
	{
		if (T.TI[i].nim == nim) return T.TI[i].nama;
	}
}

char *MinNama(TabMhs T)
{
	int i;
	char *nim = "";
	float min = Min(T);
	for (i = IdxMin; i <= T.Neff; i++)
	{
		if (T.TI[i].nilai == min)
		{
			if (nim[0] == '\0' || nim > T.TI[i].nim) nim = T.TI[i].nim;
		}
	}
	for (i = IdxMin; i <= T.Neff; i++)
	{
		if (T.TI[i].nim == nim) return T.TI[i].nama;
	}
}

int JumlahJurusan(TabMhs T, char *Jurusan)
{
	int i, count = 0;
	for (i = IdxMin; i <= T.Neff; i++)
	{
		if (Jurusan[0] == T.TI[i].nim[0] && Jurusan[1] == T.TI[i].nim[1] && Jurusan[2] == T.TI[i].nim[2])
			count++;
	}
	return count;
}
