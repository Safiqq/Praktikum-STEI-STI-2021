// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 21 Oktober 2022
// Topik praktikum : Pra-praktikum 7
// Deskripsi       : Implementasi dari stack.h

#include "stack.h"

void CreateEmpty(Stack *S)
{
    Top(*S) = Nil;
}

boolean IsEmpty(Stack S)
{
    return Top(S) == Nil;
}

boolean IsFull(Stack S)
{
    return Top(S) == MaxEl - 1;
}

void Push(Stack *S, infotype X)
{
    if (IsEmpty(*S)) Top(*S) = 0;
    else Top(*S)++;
    InfoTop(*S) = X;
}

void Pop(Stack *S, infotype *X)
{
    *X = InfoTop(*S);
    Top(*S)--;
}