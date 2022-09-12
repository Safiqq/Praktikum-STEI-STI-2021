// NIM				: 18221048
// Nama				: Syafiq Ziyadul Arifin
// Tanggal			: 12 September 2022
// Topik praktikum	: Praktikum 2
// Deskripsi		: Program cari banyak jumlah siswa lulus, indeks rata-rata, serta indeks akhir kelas

#include <stdio.h>

int main()
{
	char indeks;
	int nilai = 0, jumlahLulus = 0, jumlahTotal = 0, jumlahNilai = 0;
	float rerata;
	scanf("%d", &nilai);
	if (nilai == -999) printf("Tidak ada data");
	else
	{
		while (nilai != -999)
		{
			if (0 <= nilai && nilai <= 4)
			{
				if (nilai >= 3) jumlahLulus += 1;
				jumlahNilai += nilai;
				jumlahTotal += 1;
			}
			scanf("%d", &nilai);
		}
		if (jumlahTotal > 0)
		{
			rerata = (float)jumlahNilai / (float)jumlahTotal;
			if (rerata == 4.00) indeks = 'A';
			else if (rerata >= 3.00) indeks = 'B';
			else if (rerata >= 2.00) indeks = 'C';
			else if (rerata >= 1.00) indeks = 'D';
			else if (rerata >= 0.00) indeks = 'E';
			printf("Jumlah mahasiswa yang lulus = %d\nNilai rata-rata = %.2f\nIndeks akhir kelas = %c", jumlahLulus, rerata, indeks);
		}
		else printf("Tidak ada data");
	}
	printf("\n");
	return 0;
}