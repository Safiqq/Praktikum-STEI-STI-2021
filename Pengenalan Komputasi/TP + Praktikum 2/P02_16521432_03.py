# NIM/Nama  : 16521432/Syafiq Ziyadul Arifin
# Tanggal   : 27 Oktober 2021
# Deskripsi : Problem 3, program untuk mencetak output dengan pola
#             (menurun setiap kelipatan tertentu)

# KAMUS
# k1 : int
# k, banyak : int from input
# a : int
# hasil : str

# Mulai
k = int(input("Masukkan kelipatan: "))
banyak = int(input("Banyak suku yang diinginkan: "))

# Deklarasi variabel <k1> dan <a>
k1 = k
a = 0
hasil = ""

# Looping sebanyak banyak suku yang diinginkan
for i in range(1, banyak+1):
    hasil += str(k - a) + " "
    a += 1
    # Kondisional jika k1 sudah mencapai nilai minimal
    if a == k1:
        k += k1
        a = 0

# Mencetak output sesuai yang diminta oleh soal
print(hasil)