# Nama  : Syafiq Ziyadul Arifin
# NIM   : 16521432

# Program GambarSegitiga
# Input: N : integer
# Output: Jika N > 0 dan ganjil, gambar segitiga sesuai dengan N
#         Jika tidak, tampilkan pesan kesalahan: 

# KAMUS
# Variabel
#    N : int

def GambarSegitiga(N):
# I.S. N > 0 dan N ganjil
# F.S. Gambar segitiga dengan tinggi sebesar N sesuai spesifikasi soal
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
space = " " * (N - 1)
checker = False

if IsValid(N):
    for i in range(N):
        print(space + GambarSegitiga(N_1))
        if N_1 == N:
            N_1 -= 2
            space += "  "
            checker = True
        else:
            if checker == False:
                N_1 += 2
                space = space[2:]
            else:
                N_1 -= 2
                space += "  "
else:
    print("Masukan tidak valid")