// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 14 November 2022
// Topik praktikum : Praktikum 10
// Deskripsi       : Implementasi dari queuelist.h

#include <stdio.h>
#include "queuelist.h"

void Alokasi(address *P, infotype X)
{
	*P = (ElmtQueue *)malloc(sizeof(ElmtQueue));
	if (*P != Nil)
	{
		Info(*P) = X;
		Next(*P) = Nil;
	}
}

void Dealokasi(address P)
{
	free(P);
}

boolean IsEmpty(Queue Q)
{
	return Head(Q) == Nil && Tail(Q) == Nil;
}

int NbElmt(Queue Q)
{
	int count = 0;
	address P = Head(Q);
	if (!IsEmpty(Q))
	{
		while (P != Nil)
		{
			P = Next(P);
			count++;
		}
	}
	return count;
}

void CreateEmpty(Queue *Q)
{
	Head(*Q) = Nil;
	Tail(*Q) = Nil;
}

void Enqueue(Queue *Q, infotype X)
{
	address P;
	Alokasi(&P, X);
	if (P != Nil)
	{
		if (IsEmpty(*Q))
		{
			Head(*Q) = P;
			Tail(*Q) = P;
		}
		else
		{
			Next(Tail(*Q)) = P;
			Tail(*Q) = P;
		}
	}
}

void Dequeue(Queue *Q, infotype *X)
{
	address P = Head(*Q);
	*X = Info(Head(*Q));
	Head(*Q) = Next(Head(*Q));
	Dealokasi(P);
}