// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 16 September 2022
// Topik praktikum : Pra-praktikum 3
// Deskripsi       : Implementasi dari arraydin.h

#include "arraydin.h"
#include <stdlib.h>

ArrayDin MakeArrayDin()
{
    ArrayDin A;
    A.A = (ElType *)malloc(sizeof(ElType) * InitialSize);
    A.Capacity = InitialSize;
    A.Neff = 0;
    return A;
}

void DeallocateArrayDin(ArrayDin *array)
{
    free((*array).A);
}

boolean IsEmpty(ArrayDin array)
{
    return array.Neff == 0;
}

int Length(ArrayDin array)
{
    return array.Neff;
}

ElType Get(ArrayDin array, IdxType i)
{
    return array.A[i];
}

int GetCapacity(ArrayDin array)
{
    return array.Capacity;
}

void InsertAt(ArrayDin *array, ElType el, IdxType i)
{
    int j;
    if ((*array).Neff < (*array).Capacity)
    {
        for (j = (*array).Neff; j >= i + 1; j--)
        {
            (*array).A[j] = (*array).A[j - 1];
        }
        (*array).A[i] = el;
        (*array).Neff += 1;
    }
    else
    {
        ElType *tmpArray = (ElType *)malloc(sizeof(ElType) * (*array).Capacity);
        for (j = 0; j < (*array).Capacity; j++)
        {
            tmpArray[j] = (*array).A[j];
        }
        free((*array).A);
        (*array).A = (ElType *)malloc(sizeof(ElType) * (*array).Capacity * 2);
        for (j = 0; j < i; j++)
        {
            (*array).A[j] = tmpArray[j];
        }
        (*array).A[i] = el;
        for (j = i; j < (*array).Capacity; j++)
        {
            (*array).A[j + 1] = tmpArray[j];
        }
        free(tmpArray);
        (*array).Capacity *= 2;
        (*array).Neff += 1;
    }
}

void DeleteAt(ArrayDin *array, IdxType i)
{
    int j;
    ElType e = Get(*array, i);
    if ((*array).Neff > ((*array).Capacity / 4))
    {
        (*array).Neff -= 1;
        for (j = i; j < (*array).Neff; j++)
        {
            (*array).A[j] = (*array).A[j + 1];
        }
    }
    else
    {
        int newCap = InitialSize;
        if (newCap < ((*array).Capacity / 2)) newCap = (*array).Capacity / 2;
        ElType *tmpArray = (ElType *)malloc(sizeof(ElType) * newCap);
        for (j = 0; j < i; j++)
        {
            tmpArray[j] = (*array).A[j];
        }
        (*array).Neff -= 1;
        for (j = i; j < (*array).Neff; j++)
        {
            tmpArray[j] = (*array).A[j + 1];
        }
        free((*array).A);
        (*array).A = (ElType *)malloc(sizeof(ElType) * newCap);
        for (j = 0; j < (*array).Neff; j++)
        {
            (*array).A[j] = tmpArray[j];
        }
        (*array).Capacity = newCap;
        free(tmpArray);
    }
}