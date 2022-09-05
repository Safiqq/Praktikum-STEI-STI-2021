# NIM/Nama  : 16521432/Syafiq Ziyadul Arifin
# Tanggal   : 16 November 2021
# Deskripsi : Program untuk menghitung jumlah bilangan positif dari suatu matriks
#             dan mencetak isi dari matriks itu sendiri

# KAMUS
# N, M: int
# positif: int
# array: array
# for: looping
# i, j: int
# if: conditional
# output: str

# Mulai
# Masukkan nilai N dan M
N = int(input("Masukkan N: "))
M = int(input("Masukkan M: "))

# Definisikan variabel <positif> dengan nilai default 0 dan <array> dengan
# nilai default tiap elemennya 0
positif = 0
array = [[0 for i in range(M)] for j in range(N)]

# Looping untuk mengisi nilai tiap elemen dari <array>
for i in range(N):
    for j in range(M):
        array[i][j] = int(input("Masukkan nilai A[" + str(i+1) + "][" + str(j+1) + "]: "))
        # Kondisional jika masukan merupakan bilangan positif
        if array[i][j] > 0:
            positif += 1

# Cetak jumlah bilangan positif
print("Ada", positif, "bilangan positif di matriks.")

# Definisikan variabel <output> untuk dicetak nantinya
output = ""

# Looping untuk menuliskan matriks sesuai yang diminta pada soal
for i in range(N):
    for j in range(M):
        output += str(array[i][j]) + " "
    output += "\n"

# Cetak matriks
print(output)