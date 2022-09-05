# NIM/Nama  : 16521432/Syafiq Ziyadul Arifin
# Tanggal   : 16 November 2021
# Deskripsi : Program untuk menghitung nilai dari suatu fungsi (sebanyak B-A+1 kali) 
#             dengan x didapat dari masukan

# KAMUS
# A, B: int
# fx: int
# for: loop
# i: int

# Mulai
# Masukkan nilai A dan B
A = int(input("Masukkan A: "))
B = int(input("Masukkan B: "))

# Definisikan fungsi f() dengan parameter <x> yang akan mengembalikan
# nilai dari fungsi x^2 - 2x + 5
def f(x):
    return str((x ** 2) - (2 * x) + 5)

# Looping untuk mencetak hasil sesuai yang diminta pada soal
for i in range(A, B+1):
    print("f(" + str(i) + ") = " + f(i))