# NIM/Nama  : 16521432/Syafiq Ziyadul Arifin
# Tanggal   : 26 Oktober 2021
# Deskripsi : Problem 1, program dengan output urutan angka dari 1 sampai N (dari input)

# KAMUS
# N : int from input
# i : int for looping

# Mulai
N = int(input("Masukkan N: "))  # Input nilai N

if N >= 1:                      # Cek apakah N bernilai 1 atau lebih
    for i in range(1, N+1):     # Looping sebanyak N kali
        print(i, end=" ")       # Mencetak nilai 1 sampai N
else:                           # Cek apakah N bernilai kurang dari 1
    for i in range(1, N-1, -1): # Looping mundur dari 1 hingga N
        print(i, end=" ")       # Mencetak nilai 1 sampai N
# Selesai