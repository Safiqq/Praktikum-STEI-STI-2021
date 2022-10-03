// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 2 Oktober 2022
// Topik praktikum : Pra-praktikum 5
// Deskripsi       : Implementasi dari mesinkarakter.h

#include <stdio.h>
#include "mesinkarakter.h"

char currentChar;
boolean EOP;

static FILE *pita;

void START()
{
    pita = stdin;
    ADV();
}

void ADV()
{
    fscanf(pita, "%c", &currentChar);
    EOP = IsEOP();
    if (EOP) fclose(pita);
}

char GetCC()
{
    return currentChar;
}

boolean IsEOP()
{
    return currentChar == MARK;
}