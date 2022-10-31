// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 30 Oktober 2022
// Topik praktikum : Pra-praktikum 8
// Deskripsi       : Implementasi dari map.h

#include "map.h"

void CreateEmpty(Map *M)
{
    M->Count = Nil;
}

boolean IsEmpty(Map M)
{
    return M.Count == Nil;
}

boolean IsFull(Map M)
{
    return M.Count == MaxEl;
}

valuetype Value(Map M, keytype k)
{
    if (IsMember(M, k))
    {
        int i;
        for (i = 0; i < M.Count; i++)
        {
            if (M.Elements[i].Key == k)
                return M.Elements[i].Value;
        }
    }
    else
        return Undefined;
}

void Insert(Map *M, keytype k, valuetype v)
{
    if (!IsMember(*M, k))
    {
        infotype el;
        el.Key = k;
        el.Value = v;
        M->Elements[M->Count] = el;
        M->Count++;
    }
}

void Delete(Map *M, keytype k)
{
    if (IsMember(*M, k))
    {
        int i;
        boolean isFound = false;
        for (i = 0; i < M->Count; i++)
        {
            if (M->Elements[i].Key == k)
                isFound = true;
            if (isFound)
                M->Elements[i] = M->Elements[i + 1];
        }
        M->Count--;
    }
}

boolean IsMember(Map M, keytype k)
{
    int i;
    for (i = 0; i < M.Count; i++)
    {
        if (M.Elements[i].Key == k)
            return true;
    }
    return false;
}