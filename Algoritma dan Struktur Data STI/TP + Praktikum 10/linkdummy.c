// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 14 November 2022
// Topik praktikum : Praktikum 10
// Deskripsi       : Implementasi dari linkdummy.h

#include "linkdummy.h"

boolean IsEmpty(List L)
{
	return Info(First(L)) == 0 && Info(Last(L)) == 0;
}

void MakeEmpty(List *L)
{
	address P = Alokasi(0);
	First(*L) = P;
	Last(*L) = P;
}

address Alokasi(ElType X)
{
	address P = (Node *)malloc(sizeof(Node));
	if (P != Nil)
	{
		Info(P) = X;
		Next(P) = Nil;
	}
	return P;
}

void Dealokasi(address P)
{
	free(P);
}

address Search(List L, ElType X)
{
	address P = First(L);
	while (P != Nil && Info(P) != X)
	{
		P = Next(P);
	}
	return P;
}

void InsertFirst(List *L, ElType X)
{
	address P = Alokasi(X);
	if (P != Nil)
	{
		Next(P) = First(*L);
		First(*L) = P;
	}
}

void InsertLast(List *L, ElType X)
{
	address P = Alokasi(X);
	if (P != Nil)
	{
		address loc = First(*L);
		if (IsEmpty(*L))
			InsertFirst(L, X);
		else
		{
			while (Info(Next(loc)) != 0)
			{
				loc = Next(loc);
			}
			Next(P) = Next(loc);
			Next(loc) = P;
		}
	}
}

void DeleteFirst(List *L, ElType *X)
{
	address P = First(*L);
	*X = Info(First(*L));
	First(*L) = Next(First(*L));
	Dealokasi(P);
}

void DeleteLast(List *L, ElType *X)
{
	address P = First(*L);
	if (Next(P) == Last(*L))
		DeleteFirst(L, X);
	else
	{
		while (Next(Next(P)) != Last(*L))
		{
			P = Next(P);
		}
		*X = Info(Next(P));
		Dealokasi(Next(P));
		Next(P) = Last(*L);
	}
}