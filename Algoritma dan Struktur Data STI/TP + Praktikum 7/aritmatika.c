// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 21 Oktober 2022
// Topik praktikum : Pra-praktikum 7
// Deskripsi       : Implementasi dari aritmatika.h

#include <stdio.h>
#include "aritmatika.h"

boolean isOperator(char input)
{
    return (input == '+') || (input == '-') || (input == '*') || (input == '/');
}

int hitung(int angka1, int angka2, char op)
{
    if (op == '+')
        return angka1 + angka2;
    else if (op == '-')
        return angka1 - angka2;
    else if (op == '*')
        return angka1 * angka2;
    else if (op == '/')
        return angka1 / angka2;
}

int eval(char *input, int length)
{
    int i, temp1, temp2, result;
    Stack S;
    CreateEmpty(&S);
    for (i = 0; i < length; i++)
    {
        if (!isOperator(input[i]))
            Push(&S, input[i] - '0');
        else
        {
            Pop(&S, &temp2);
            Pop(&S, &temp1);
            result = hitung(temp1, temp2, input[i]);
            Push(&S, result);
        }
    }
    Pop(&S, &result);
    return result;
}