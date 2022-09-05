# NIM/Nama  : 16521432/Syafiq Ziyadul Arifin
# Tanggal   : 3 November 2021
# Deskripsi : Problem 2, program untuk mengubah huruf yang sering muncul
#             dengan huruf R (dengan asumsi bahwa masukan hanya berupa huruf
#             T, U, A, N, D, I, P)

# KAMUS
# panjang, max : int
# kata, huruf, kata_baru : str
# i, j, k : int
# for : looping
# if, else : conditional
# check : bool

# Mulai
# Masukkan kata Tuan Dip dan panjangnya, dan definisikan variabel <max>,
# <huruf>, <kata_baru>, dan <check>
panjang = int(input("Masukkan panjang kata Tuan Dip: "))
kata = input("Masukkan kata Tuan Dip: ")
max = 0
huruf = ""
kata_baru = ""
check = False

# Looping untuk cek apakah hurufnya hanya terdiri dari T, U, A, N, D, I, dan P
for i in kata:
    if i == "T" or i == "U" or i == "A" or i == "N" or i == "D" or i == "I" or i == "P":
        check = True

# Kondisional jika masukan benar
if check == True:
    # Looping untuk menentukan huruf yang paling sering muncul
    for i in range(panjang):
        banyak = 0
        for j in kata:
            if j == kata[i]:
                banyak += 1
        if max < banyak:
            max = banyak
            huruf = kata[i]

    # Looping untuk membentuk kata baru
    for k in range(panjang):
        if kata[k] == huruf:
            kata_baru += "R"
        else:
            kata_baru += kata[k]

    # Cetak output sesuai yang diminta pada soal
    print("Kata setelah diubah Tuan Ric adalah " + kata_baru + ".")
else:
    print("Masukan salah, huruf yang diperbolehkan hanya T, U, A, N, D, I, dan P.")