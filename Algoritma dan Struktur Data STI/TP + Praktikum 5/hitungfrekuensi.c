// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 3 Oktober 2022
// Topik praktikum : Praktikum 5
// Deskripsi       : Implementasi dari hitungfrekuensi.h

#include <stdio.h>
#include "hitungfrekuensi.h"

int hitungfrekuensi()
{
	int t = 0, i = 0, g = 0, a = 0, count = 0;
	START();
	while (GetCC() != MARK)
	{
		if (GetCC() == 't' || GetCC() == 'T') t = 1;
		else if ((GetCC() == 'i' || GetCC() == 'I') && t == 1) i = 1;
		else if ((GetCC() == 'g' || GetCC() == 'G') && t == 1 && i == 1) g = 1;
		else if (GetCC() == 'a' || GetCC() == 'A')
		{
			if (t == 1 && i == 1 && g == 1) count++;
			t = 0, i = 0, g = 0;
		}
		else
		{
			t = 0, i = 0, g = 0, a = 0;
		}
		ADV();
	}
	return count;
}