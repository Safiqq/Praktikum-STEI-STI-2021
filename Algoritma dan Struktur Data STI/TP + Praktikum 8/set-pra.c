// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 30 Oktober 2022
// Topik praktikum : Pra-praktikum 8
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
        S->Count--;
    }
}

boolean IsMember(Set S, infotype Elmt)
{
    int i;
    for (i = 0; i < S.Count; i++)
    {
        if (S.Elements[i] == Elmt)
            return true;
    }
    return false;
}