// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 24 Oktober 2022
// Topik praktikum : Praktikum 7
// Deskripsi       : Implementasi dari valid.h

#include <stdio.h>
#include "valid.h"

Stack validParantheses(char* input, int length)
{
	int i;
	Stack s;
	CreateEmpty(&s);
	for (i = 0; i < length - 1; i++)
	{
		if (input[i] == '(' && input[i+1] == ')')
		{
			Push(&s, '(');
			Push(&s, ')');
		}
		else if (input[i] == '{' && input[i+1] == '}')
		{
			Push(&s, '{');
			Push(&s, '}');
		}
		else if (input[i] == '[' && input[i+1] == ']')
		{
			Push(&s, '[');
			Push(&s, ']');
		}
	}
	return s;
}