# NIM/Nama  : 16521432/Syafiq Ziyadul Arifin
# Tanggal   : 16 November 2021
# Deskripsi : Program untuk mencetak matriks segitiga pascal berukuran NxN

# KAMUS
# N: int
# array: array
# output: str
# i, j: int
# for: looping

# Mulai
# Masukkan nilai N
N = int(input("Masukkan N: "))

# Definisikan array <array> dengan nilai default tiap elemennya 1 dan
# variabel <output> berupa string
array = [[1 for i in range(N)] for j in range(N)]
output = ""

# Looping untuk mengisi matriks dengan jumlah dari bilangan di atas dan kirinya
for i in range(1, N):
    for j in range(1, N):
        array[i][j] = array[i-1][j] + array[i][j-1]

# Looping untuk menuliskan matriks sesuai yang diminta pada soal
for i in range(N):
    for j in range(N):
        output += str(array[i][j]) + " "
    output += "\n"

# Cetak matriks
print(output)