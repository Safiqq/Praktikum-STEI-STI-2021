// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 30 Oktober 2022
// Topik praktikum : Pra-praktikum 8
// Deskripsi       : Implementasi dari hashmap.h

#include "hashmap.h"

void CreateEmpty(HashMap *M)
{
    int i;
    M->Count = Nil;
    for (i = 0; i < MaxEl; i++)
    {
        M->Elements[i].Key = Undefined;
        M->Elements[i].Value = Undefined;
    }
}

address Hash(keytype K)
{
    return K % MaxEl;
}

valuetype Value(HashMap M, keytype k)
{
    int i;
    boolean isFound = false;
    for (i = 0; i < MaxEl; i++)
    {
        if (M.Elements[i].Key == k)
        {
            isFound = true;
            return M.Elements[i].Value;
        }
    }
    if (!isFound)
        return Undefined;
}

void Insert(HashMap *M, keytype k, valuetype v)
{
    int i = 0;
    address K = Hash(k);

    // Search index yg masih kosong (open addressing linear probing, interval = 1)
    while (M->Elements[K].Key != Undefined)
    {
        K = (K + 1) % MaxEl;
    }
    M->Elements[K].Key = k;
    M->Elements[K].Value = v;
    M->Count++;
}