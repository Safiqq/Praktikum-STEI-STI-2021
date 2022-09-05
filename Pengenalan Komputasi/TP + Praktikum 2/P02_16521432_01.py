# NIM/Nama  : 16521432/Syafiq Ziyadul Arifin
# Tanggal   : 27 Oktober 2021
# Deskripsi : Problem 1, program untuk mencari bilangan Tuan Ric
#             dengan syarat bilangan Tuan Ric lebih besar dari
#             bilangan Tuan Dip dan jumlah digit-digit bilangan
#             keduanya sama

# KAMUS
# jumlahN : int
# N : int from input
# i : int for iterate
# jumlahI : int

# Mulai
# Masukkan nilai N dan deklarasi isi dari variabel <jumlahN> dan <check>
N = int(input("Masukkan bilangan Tuan Dip (N): "))
jumlahN = 0
check = False

# Looping untuk menghitung jumlah digit-digit bilangan Tuan Dip
for i in str(N):
    jumlahN += int(i)
# Looping sampai ditemukan bilangan Tuan Ric
while check == False:
    # Deklarasi isi dari variabel <jumlahI>
    jumlahI = 0
    N += 1
    # Looping untuk menghitung jumlah digit-digit CALON bilangan Tuan Ric
    for i in str(N):
        jumlahI += int(i)
    # Kondisional jika jumlah digit-digit Tuan Dip = jumlah digit-digit Tuan Ric
    if jumlahI == jumlahN:
        check = True
        # Cetak output sesuai yang diminta oleh soal
        print("Bilangan Tuan Ric adalah " + str(N) + ".")