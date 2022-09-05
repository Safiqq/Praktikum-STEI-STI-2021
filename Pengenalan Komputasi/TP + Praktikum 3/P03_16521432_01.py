# NIM/Nama  : 16521432/Syafiq Ziyadul Arifin
# Tanggal   : 3 November 2021
# Deskripsi : Problem 1, program untuk menghitung hari maksimal
#             Tuan Dip menginap

# KAMUS
# N, k, hari, biaya : int
# biayas : array
# i, j : int
# for : looping
# if, elif : conditional

# Mulai
# Masukkan input jumlah hari dan jumlah koin Tuan Dip dan
# definisikan array <biayas> dan variabel <biaya> dan <hari>
N = int(input('Masukkan jumlah hari (N) : '))
k = int(input('Masukkan jumlah koin Tuan Dip (k) : '))
biayas = [0 for i in range(N)]
biaya = 0
hari = 0

# Looping untuk masukkan input biaya perharinya
for i in range(N):
    biayas[i] = int(input('Biaya hari ke ' + str(i+1) + ' : '))

# Looping untuk mengurutkan biaya perharinya dari yang termurah
for i in range(N):
    for j in range(i+1, N):
        if biayas[i] > biayas[j]:
            a = biayas[i]
            biayas[i] = biayas[j]
            biayas[j] = a

# Looping untuk menghitung maksimal hari Tuan Dip menginap
for j in range (N):
    biaya += biayas[j]
    if k >= biaya: 
        hari += 1

# Cetak output (sesuai soal) dengan kondisional jika hari maksimalnya lebih dari 0
if hari > 0:
    print("Maksimalnya adalah", hari, "hari.")
elif hari == 0:
    print("Tuan Dip tidak bisa menonton TV ):")