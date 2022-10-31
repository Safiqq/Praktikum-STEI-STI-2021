// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 31 Oktober 2022
// Topik praktikum : Praktikum 8
// Deskripsi       : Implementasi fungsi UnionMap

#include "union_map.h"

Map UnionMap(Map m1, Map m2, boolean key_based)
{
	int i, j;
	infotype temp;
	Map m3;
	CreateEmpty(&m3);

	// Insert m1 first
	for (i = 0; i < m1.Count; i++)
	{
		Insert(&m3, m1.Elements[i].Key, m1.Elements[i].Value);
	}

	// Insert m2
	for (i = 0; i < m2.Count; i++)
	{
		Insert(&m3, m2.Elements[i].Key, m2.Elements[i].Value);
	}

	// Sort map secara ascending
	// key_based = true -> sort berdasarkan Key
	// key_based = false -> sort berdasarkan Value (tidak unik)
	//                      sort berdasarkan Key jika ada Value yg sama
	for (i = 0; i < m3.Count; i++)
	{
		for (j = i; j < m3.Count; j++)
		{
			temp = m3.Elements[i];
			if ((key_based && temp.Key > m3.Elements[j].Key) || (!key_based && temp.Value > m3.Elements[j].Value) || (!key_based && temp.Value == m3.Elements[j].Value && temp.Key > m3.Elements[j].Key))
			{
				m3.Elements[i] = m3.Elements[j];
				m3.Elements[j] = temp;
			}
		}
	}
	return m3;
}