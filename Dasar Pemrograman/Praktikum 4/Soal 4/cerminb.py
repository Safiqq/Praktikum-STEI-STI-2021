# Nama  : Syafiq Ziyadul Arifin
# NIM   : 16521432

# Program GambarBTercermin
# Input: N : integer
# Output: Jika N > 0 dan ganjil, gambar B tercermin sesuai dengan N
#         Jika tidak, tampilkan pesan kesalahan "Masukan tidak valid"

# KAMUS
# Variabel
#    N : int

def GambarBTercermin(N):
# I.S. N > 0 dan N ganjil
# F.S. Gambar B tercermin dengan lebar sebesar N sesuai spesifikasi soal
# Lengkapilah kamus lokal dan algoritma prosedur di bawah ini
    if N < 0:
        N *= (-1)
    return (N * "*")

def IsValid(N):
# menghasilkan true jika N positif dan ganjil, false jika tidak
# Lengkapilah kamus lokal dan algoritma fungsi di bawah ini
    return N > 0 and N % 2 == 1

N = int(input())
N_1 = N
space = ""

if IsValid(N):
    for i in range(N):
        print(space + GambarBTercermin(N_1))
        if N_1 > 0:
            space += "  "
        else:
            space = space[2:]
        if N_1 - 2 == 1:
            N_1 = -1
        else:
            N_1 -= 2
else:
    print("Masukan tidak valid")