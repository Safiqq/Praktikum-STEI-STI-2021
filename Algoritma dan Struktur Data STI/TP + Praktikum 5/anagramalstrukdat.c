// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 3 Oktober 2022
// Topik praktikum : Praktikum 5
// Deskripsi       : Implementasi dari anagramalstrukdat.h

#include <stdio.h>
#include "anagramalstrukdat.h"

int stringLength(char *string)
{
	int count = 0;
	while (*string != '\0')
	{
		count++, string++;
	}
	return count;
}

Word toKata(char *command)
{
	int i;
	Word kata;
	kata.Length = stringLength(command);
	for (i = 0; i < kata.Length; i++)
	{
		kata.TabWord[i] = command[i];
	}
	return kata;
}

boolean isAnagram(Word string1, Word string2)
{
	int i;
	int alfabet1[26] = {0}, alfabet2[26] = {0};
	for (i = 0; i < stringLength(string1.TabWord); i++)
	{
		if ('A' <= string1.TabWord[i] && string1.TabWord[i] <= 'Z') alfabet1[string2.TabWord[i] - 65]++;
		else if ('a' <= string1.TabWord[i] && string1.TabWord[i] <= 'z') alfabet1[string1.TabWord[i] - 97]++;
	}
	for (i = 0; i < stringLength(string2.TabWord); i++)
	{
		if ('A' <= string2.TabWord[i] && string2.TabWord[i] <= 'Z') alfabet2[string2.TabWord[i] - 65]++;
		else if ('a' <= string2.TabWord[i] && string2.TabWord[i] <= 'z') alfabet2[string2.TabWord[i] - 97]++;
	}
	for (i = 0; i < 26; i++)
	{
		if (alfabet1[i] != alfabet2[i]) return false;
	}
	return true;
}

void anagramalstrukdat(int *frek)
{
	Word alstrukdat = toKata("alstrukdat");
	STARTWORD();
	while (!isEndWord())
	{
		*frek += isAnagram(alstrukdat, currentWord);
		ADVWORD();
	}
}