# Nama  : Syafiq Ziyadul Arifin
# NIM   : 16521432

# Program GambarPita
# Input: N : integer
# Output: Jika N > 0 dan ganjil, gambar pita sesuai dengan N
#         Jika tidak, tampilkan pesan kesalahan "Masukan tidak valid"

# KAMUS
# Variabel
#    N, N_1 : int
#    space : str

def GambarPita(N):
# I.S. N > 0 dan N ganjil
# F.S. Gambar pita dengan lebar sebesar N sesuai spesifikasi soal
# Lengkapilah kamus lokal dan algoritma prosedur di bawah ini
    if N < 0:
        N *= (-1)
    return N * "*"

def IsValid(N):
# menghasilkan true jika N positif dan ganjil, false jika tidak
# Lengkapilah kamus lokal dan algoritma fungsi di bawah ini
    return N > 0 and N % 2 == 1

# ALGORITMA PROGRAM UTAMA
N = int(input())
N_1 = N
space = ""

if IsValid(N):
    for i in range(N):
        print(space + GambarPita(N_1))
        if N_1 > 0:
            space += " "
        else:
            space = space[1:]
        if N_1 - 2 == 1:
            N_1 = -1
        else:
            N_1 -= 2
else:
    print("Masukan tidak valid")