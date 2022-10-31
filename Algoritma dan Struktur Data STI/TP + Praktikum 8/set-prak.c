// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 31 Oktober 2022
// Topik praktikum : Praktikum 8
// Deskripsi       : Implementasi dari set.h

#include "set.h"

void CreateEmpty(Set *S)
{
	S->Count = Nil;
}

boolean IsEmpty(Set S)
{
	return S.Count == Nil;
}

boolean IsFull(Set S)
{
	return S.Count == MaxEl;
}

void Insert(Set *S, infotype Elmt)
{
	if (!IsMember(*S, Elmt))
	{
		S->Elements[S->Count] = Elmt;
		S->Count++;
	}
}

void Delete(Set *S, infotype Elmt)
{
	if (IsMember(*S, Elmt))
	{
		int i;
		boolean isFound = false;
		for (i = 0; i < S->Count; i++)
		{
			if (S->Elements[i] == Elmt) isFound = true;
			if (isFound) S->Elements[i] = S->Elements[i+1];
		}
	}
}

boolean IsMember(Set S, infotype Elmt)
{
	int i;
	for (i = 0; i < S.Count; i++)
	{
		if (S.Elements[i] == Elmt) return true;
	}
	return false;
}

Set SetUnion(Set s1, Set s2)
{
	int i;
	Set s3;
	CreateEmpty(&s3);
	for (i = 0; i < s1.Count; i++)
	{
		Insert(&s3, s1.Elements[i]);
	}

	// Just insert s2 without checker IsMember(), no duplicate will be added
	for (i = 0; i < s2.Count; i++)
	{
		Insert(&s3, s2.Elements[i]);
	}
	return s3;
}

Set SetIntersection(Set s1, Set s2)
{
	int i;
	Set s3;
	CreateEmpty(&s3);
	for (i = 0; i < s1.Count; i++)
	{
		if (IsMember(s2, s1.Elements[i]))
			Insert(&s3, s1.Elements[i]);
	}
	return s3;
}

Set SetSymmetricDifference(Set s1, Set s2)
{
	int i;
	Set s3;
	CreateEmpty(&s3);
	for (i = 0; i < s1.Count; i++)
	{
		if (!IsMember(s2, s1.Elements[i]))
			Insert(&s3, s1.Elements[i]);
	}
	for (i = 0; i < s2.Count; i++)
	{
		if (!IsMember(s1, s2.Elements[i]))
			Insert(&s3, s2.Elements[i]);
	}
	return s3;
}

Set SetSubtract(Set s1, Set s2)
{
	int i;
	Set s3;
	CreateEmpty(&s3);
	for (i = 0; i < s1.Count; i++)
	{
		if (!IsMember(s2, s1.Elements[i]))
			Insert(&s3, s1.Elements[i]);
	}
	return s3;
}
