# NIM/Nama  : 16521432/Syafiq Ziyadul Arifin
# Tanggal   : 3 November 2021
# Deskripsi : Program untuk membalik input angka sebanyak N

# KAMUS
# N, angka : int
# i : int for looping

# Mulai
# Masukkan input sebanyak N dan definisikan array
# <angka> dengan nilai elemen default 0
N = int(input("Masukkan N: "))
angka = [0 for i in range(N)]

# Looping untuk mengganti nilai elemen dari array <angka>
for i in range(N):
    angka[i] = int(input())

# Mencetak output sesuai yang diminta pada soal
print("Hasil dibalik:")
for i in range(N-1, -1, -1):
    print(angka[i])