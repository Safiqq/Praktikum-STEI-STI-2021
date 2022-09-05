# NIM/Nama  : 16521432/Syafiq Ziyadul Arifin
# Tanggal   : 3 November 2021
# Deskripsi : Program untuk mengecek apakah suatu string
#             merupakan palindrom

# KAMUS
# panjang_S : int
# S, s : str
# i : int for looping

# Mulai
# Masukkan input panjang string dan nilai dari string
panjang_S = int(input("Masukkan panjang string: "))
S = input("Masukkan string: ")

# Definisikan variabel <s> sebagai hasil balikan dari string
s = ""

# Looping untuk menghasilkan hasil balikan dari string
for i in range(panjang_S-1, -1, -1):
    s += S[i]

# Output dengan kondisional jika string adalah palindrom
if S == s:
    print(S, "adalah palindrom")
else:
    print(S, "bukan palindrom")