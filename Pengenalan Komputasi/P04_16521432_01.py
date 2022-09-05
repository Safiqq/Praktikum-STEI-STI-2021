# NIM/Nama  : 16521432/Syafiq Ziyadul Arifin
# Tanggal   : 17 November 2021
# Deskripsi : Problem 1, program untuk menentukan mahasiswa ke berapa yang memiliki
#             nilai rata-rata paling tinggi

# KAMUS
# N, M: int
# max, jumlah: int
# array: array (matriks int)
# mahasiswa: str
# i, j: int
# for: looping
# if, else: conditional

# ALGORITMA
# Masukkan nilai <N> dan <M>
N = int(input("Masukkan banyak Mahasiswa (N): "))
M = int(input("Masukkan banyak Ujian (M): "))

# Definisikan array<array>, int<max>, dan str<mahasiswa>
array = [[0 for j in range(M)] for i in range(N)]
max = 0
mahasiswa = ""

# Looping untuk menentukan nilai rata-rata ujian tertinggi
for i in range(N):
    jumlah = 0
    # Looping untuk masukan nilai ujian mahasiswa <i> sebanyak <j>
    for j in range(M):
        # Masukkan nilai ujian
        array[i][j] = int(input("Masukkan nilai Ujian ke " + str(j+1) + " mahasiswa " + str(i+1) + ": "))
        # Menambahkan nilai ujian mahasiswa <i> ke <j> pada variabel <jumlah>
        jumlah += array[i][j]
    # Kondisional jika nilai rata-rata ujian mahasiswa <i> merupakan yang tertinggi
    if max < jumlah:
        max = jumlah

# Looping untuk menentukan mahasiswa mana saja yang mendapat nilai tertinggi
for i in range(N):
    jumlah = 0
    # Looping untuk menghitung jumlah nilai mahasiswa <i>
    for j in range(M):
        jumlah += array[i][j]
    # Kondisional jika mahasiswa <i> merupakan salah satu/satu2nya peraih nilai tertinggi
    if max == jumlah:
        # Kondisional untuk menghasilkan output sesuai yang diminta pada soal
        if mahasiswa == "":
            mahasiswa += str(i+1)
        else:
            mahasiswa += ", " + str(i+1)

# Cetak output sesuai yang diminta pada soal
print("Mahasiswa dengan rata-rata tertinggi adalah mahasiswa " + mahasiswa + ".")
