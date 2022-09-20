// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 19 September 2022
// Topik praktikum : Praktikum 3
// Deskripsi       : Hitung jumlah huruf konsonan dan huruf vokal yang terdapat di suatu kalimat

#include <stdio.h>
#include "jumlahkonsonanvokal.h"

#define boolean int
#define true 1
#define false 0

boolean isAlphabet(char x) {
	return (((int)x >= 97 && (int)x <= 122) || ((int)x >= 65 && (int)x <= 90));
}

boolean isVowel(char x) {
	return (x == 'a' || x == 'i' || x == 'u' || x == 'e' || x == 'o' || x == 'A' || x == 'I' || x == 'U' || x == 'E' || x == 'O');
}

void jumlahKonsonanVokal(char* x, int* konsonan, int* vokal) {
	while (*x != '\0') {
		if (isAlphabet(*x)) {
			if (isVowel(*x)) (*vokal)++;
			else (*konsonan)++;
		}
		x++;
	}
}
