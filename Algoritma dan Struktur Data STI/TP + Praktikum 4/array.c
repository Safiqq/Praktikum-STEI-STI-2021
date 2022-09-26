// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 23 September 2022
// Topik praktikum : Pra-praktikum 4
// Deskripsi       : Implementasi array.h

#include "array.h"
#include <stdio.h>

void MakeEmpty(TabInt *T)
{
    T->Neff = 0;
}

int NbElmt(TabInt T)
{
    return T.Neff;
}

int MaxNbEl(TabInt T)
{
    return IdxMax - IdxMin + 1;
}

IdxType GetFirstIdx(TabInt T)
{
    return IdxMin;
}

IdxType GetLastIdx(TabInt T)
{
    return T.Neff;
}

ElType GetElmt(TabInt T, IdxType i)
{
    return T.TI[i];
}

void SetTab(TabInt Tin, TabInt *Tout)
{
    int i;
    for (i = 0; i < NbElmt(Tin); i++)
    {
        Tout->TI[i] = Tin.TI[i];
    }
    Tout->Neff = Tin.Neff;
}

void SetEl(TabInt *T, IdxType i, ElType v)
{
    T->TI[i] = v;

    // Cek apakah param <i> melebihi panjang <T>, logika mirip InsertLast di "list.c"
    if (i > T->Neff) SetNeff(T, T->Neff + 1);
}

void SetNeff(TabInt *T, IdxType N)
{
    T->Neff = N;
}

boolean IsIdxValid(TabInt T, IdxType i)
{
    return i >= IdxMin && i <= IdxMax;
}

boolean IsIdxEff(TabInt T, IdxType i)
{
    return i >= GetFirstIdx(T) && i <= GetLastIdx(T);
}

boolean IsEmpty(TabInt T)
{
    return T.Neff == 0;
}

boolean IsFull(TabInt T)
{
    return T.Neff == IdxMax;
}

void TulisIsi(TabInt T)
{
    if (IsEmpty(T)) printf("Tabel kosong\n");
    else
    {
        int i;
        for (i = IdxMin; i <= NbElmt(T); i++)
        {
            // Speknya salah (?) index START dari 1 (BUKAN 0)
            printf("%d:%d\n", i, T.TI[i]);
        }
    }
}

TabInt PlusTab(TabInt T1, TabInt T2)
{
    TabInt T;
    T.Neff = NbElmt(T1);
    int i;
    for (i = 1; i <= NbElmt(T); i++)
    {
        T.TI[i] = T1.TI[i] + T2.TI[i];
    }
    return T;
}

TabInt MinusTab(TabInt T1, TabInt T2)
{
    TabInt T;
    T.Neff = NbElmt(T1);
    int i;
    for (i = 1; i <= NbElmt(T); i++)
    {
        T.TI[i] = T1.TI[i] - T2.TI[i];
    }
    return T;
}

ElType ValMax(TabInt T)
{
    ElType max = GetElmt(T, IdxMin);
    int i;
    for (i = IdxMin + 1; i <= NbElmt(T); i++)
    {
        if (max < GetElmt(T, i)) max = GetElmt(T, i);
    }
    return max;
}

ElType ValMin(TabInt T)
{
    ElType min = GetElmt(T, IdxMin);
    int i;
    for (i = IdxMin + 1; i <= NbElmt(T); i++)
    {
        if (min > GetElmt(T, i)) min = GetElmt(T, i);
    }
    return min;
}

IdxType IdxMaxTab(TabInt T)
{
    ElType max = ValMax(T);
    int i;
    for (i = IdxMin; i <= NbElmt(T); i++)
    {
        if (GetElmt(T, i) == max) return i;
    }
    return IdxUndef;
}

IdxType IdxMinTab(TabInt T)
{
    ElType min = ValMin(T);
    int i;
    for (i = IdxMin; i <= NbElmt(T); i++)
    {
        if (GetElmt(T, i) == min) return i;
    }
    return IdxUndef;
}