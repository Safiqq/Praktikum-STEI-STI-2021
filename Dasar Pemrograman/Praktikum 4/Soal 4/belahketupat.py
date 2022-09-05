# Nama  : Syafiq Ziyadul Arifin
# NIM   : 16521432

# Program GambarBelahKetupat
# Input: N : integer
# Output: Jika N > 0 dan ganjil, gambar belah ketupat sesuai dengan N
#         Jika tidak, tampilkan pesan kesalahan: 

# KAMUS
# Variabel
#    N : int

def GambarBelahKetupat(N):
# I.S. N > 0 dan N ganjil
# F.S. Gambar belah ketupat dengan panjang diagonal mendatar sebesar N
#      sesuai spesifikasi soal
# Lengkapilah kamus lokal dan algoritma prosedur di bawah ini
    if N < 0:
        N *= (-1)
    return (N * "*")

def IsValid(N):
# menghasilkan true jika N positif dan ganjil, false jika tidak
# Lengkapilah kamus lokal dan algoritma fungsi di bawah ini
    return N > 0 and N % 2 == 1

N = int(input())
N_1 = 1
space = " " * (N // 2)
checker = False

if IsValid(N):
    for i in range(N):
        print(space + GambarBelahKetupat(N_1))
        if N_1 == N:
            N_1 -= 2
            space += " "
            checker = True
        else:
            if checker == False:
                N_1 += 2
                space = space[1:]
            else:
                N_1 -= 2
                space += " "
else:
    print("Masukan tidak valid")