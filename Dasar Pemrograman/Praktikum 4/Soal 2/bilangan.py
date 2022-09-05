# Nama  : Syafiq Ziyadul Arifin
# NIM   : 16521432

# Program Bilangan
# Input: 2 integer: N, X
#        1 array of int: X_isi
# Output: Jika X = 0, urutan pertama ditemukan bilangan 0
#                     jika tidak ada maka "Tidak ada 0"
#         Jika X = -1, urutan pertama ditemukan bilangan negatif dan bilangannya
#                      jika tidak ada maka "Tidak ada negatif"
#         Jika X = 1, urutan pertama ditemukan bilangan positif dan bilangannya
#                     jika tidak ada maka "Tidak ada positif"
#         Jika X selain [-1, .. , 1], "Tidak diproses"

# KAMUS
# variabel
#    N, i, X : int
#    X_isi : array of int
#    checker : bool
 
# PROCEDURE
N = 0

while N <= 0 or N > 100:
    N = int(input())
    if N <= 0 or N > 100:
        print("Masukan salah. Ulangi!")

X_isi = [0 for i in range(N)]

for i in range(N):
    X_isi[i] = int(input())

X = int(input())
checker = False

if X < -1 or X > 1:
    print("Tidak diproses")
else:
    for i in range(N):
        if X == 0:
            if X_isi[i] == 0 and checker == False:
                print(i+1)
                checker = True
        elif X == -1:
            if X_isi[i] < 0 and checker == False:
                print(i+1, X_isi[i])
                checker = True
        elif X == 1:
            if X_isi[i] > 0 and checker == False:
                print(i+1, X_isi[i])
                checker = True
    if checker == False:
        if X == 0:
            print("Tidak ada 0")
        elif X == -1:
            print("Tidak ada negatif")
        else:
            print("Tidak ada positif")