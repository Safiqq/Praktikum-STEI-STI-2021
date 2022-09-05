# NIM/Nama  : 16521432/Syafiq Ziyadul Arifin
# Tanggal   : 26 Oktober 2021
# Deskripsi : Problem 2, program dengan output bilangan 10^x terkecil yang lebih dari N

# KAMUS
# N : int from input
# x : int for looping (nilai default 0)

# Mulai
N = float(input("Masukkan N: "))    # Input nilai N
x = 0                               # Definisikan x dengan nilai default 0

while 10 ** x <= N:                 # While looping dengan syarat 10^x kurang dari sama dengan N
    x += 1                          # Nilai x ditambah dengan 1
print(10 ** x)                      # Cetak bilangan 10^x terkecil yang lebih dari N
# Selesai