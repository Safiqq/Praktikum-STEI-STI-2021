// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 24 Oktober 2022
// Topik praktikum : Praktikum 7
// Deskripsi       : Pengurangan integer yang direpresentasikan
//                   dengan string (implementasi stack)

#include <stdio.h>
#include "stack.h"

int main()
{
	char str1[100], str2[100];
	Stack s1, s2, s;
	int i = 0, j = 0, k = 0;
	int temp = 0, temp1, temp2, res;
	boolean isNeg = false, startNull = true;
	CreateEmpty(&s1), CreateEmpty(&s2), CreateEmpty(&s);
	scanf("%s\n%s", str1, str2);
	while (str1[i] != '\0')
	{
		Push(&s1, (int)str1[i] - '0');
		i++;
	}
	while (str2[j] != '\0')
	{
		Push(&s2, (int)str2[j] - '0');
		j++;
	}
	if (j > i) isNeg = true;
	else if (j == i)
	{
		while (k <= i && !isNeg)
		{
			if (str2[k] > str1[k]) isNeg = true;
			k++;
		}
	}
	while (!IsEmpty(s1) || !IsEmpty(s2))
	{
		if (!IsEmpty(s1)) Pop(&s1, &temp1);
		else temp1 = 0;
		if (!IsEmpty(s2)) Pop(&s2, &temp2);
		else temp2 = 0;
		
		if (!isNeg) res = temp1 - temp2 - temp;
		else res = temp2 - temp1 - temp;
		if (res < 0) res += 10;
		Push(&s, res);
		if ((temp1 < temp2 && !isNeg) || (temp2 < temp1 && isNeg))
			temp = 1;
		else if ((temp1 > temp2 && !isNeg) || (temp2 > temp1 && isNeg))
			temp = 0;
	}
	if (isNeg) printf("-");
	while (!IsEmpty(s))
	{
		Pop(&s, &temp);
		if (startNull && temp != 0) startNull = false;
		if (!startNull) printf("%d", temp);
	}
	if (IsEmpty(s) && startNull) printf("0");
	printf("\n");
}