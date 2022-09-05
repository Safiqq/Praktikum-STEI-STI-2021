# NIM/Nama  : 16521432/Syafiq Ziyadul Arifin
# Tanggal   : 3 November 2021
# Deskripsi : Program untuk mengecek apakah B adalah anagram dari A

# KAMUS
# A, B, check : int
# i, j : int for looping
# angka_A, angka_B : array

# Mulai
# Masukkan input banyak elemen A dan looping untuk
# masukkan nilai tiap elemennya
A = int(input("Masukkan banyaknya elemen A: "))
angka_A = [0 for i in range(A)]
for i in range(A):
    angka_A[i] = int(input("Masukkan elemen A ke-" + str(i+1) + ": "))

# Masukkan input banyak elemen B dan looping untuk
# masukkan nilai tiap elemennya
B = int(input("Masukkan banyaknya elemen B: "))
angka_B = [0 for i in range(B)]
for j in range(B):
    angka_B[j] = int(input("Masukkan elemen B ke-" + str(j+1) + ": "))

# Definisikan variabel <check> sebagai jumlah huruf yang sama
check = 0

# Looping untuk mengecek apakah huruf dari A = huruf dari B
for i in range(A):
    for j in range(B):
        if angka_A[i] == angka_B[j]:
            check += 1

# Cetak output dengan kondisional jika jumlah huruf yang sama
# dari A dan B == A dan B
if check == A and A == B:
    print("B adalah anagram dari A")
else:
    print("B bukan anagram dari A")