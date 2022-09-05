# NIM/Nama  : 16521432/Syafiq Ziyadul Arifin
# Tanggal   : 27 Oktober 2021
# Deskripsi : Problem 2, program untuk mencari triplet a, b, c dengan
#             1 <= a < b < c <= N

# KAMUS
# i, j, k : int for iteration
# N : int from input
# jumlah : int

# Mulai
# Masukkan nilai N dan deklarasi variabel <jumlah> dengan nilai default 0
N = int(input("Masukkan bilangan (N) : "))
jumlah = 0

# Looping sebanyak 3 beranak untuk mencari triplet a, b, c
for i in range(1, N+1):
    for j in range(1, N+1):
        for k in range(1, N+1):
            # Kondisional jika triplet a, b, c memenuhi syarat dari soal
            if i < j < k:
                # Kondisional jika triplet a, b, c memenuhi syarat sebagai segitiga
                # (jumlah 2 bilangan terkecil > bilangan terbesar)
                if i + j > k:
                    jumlah += 1

# Mencetak output sesuai yang diminta oleh soal
print(jumlah)