# NIM/Nama  : 16521432/Syafiq Ziyadul Arifin
# Tanggal   : 17 November 2021
# Deskripsi : Problem 3, program untuk membuat pola Tuan Dip sesuai yang diminta pada soal

# KAMUS
# char1, char2: str
# n: int
# array: array (str)
# pola: func (with 3 parameters)

# ALGORITMA
# Masukkan input <char1>, <char2>, dan <n>
char1 = input("Masukkan karakter 1: ")
char2 = input("Masukkan karakter 2: ")
n = int(input("Masukkan nilai n: "))

# Definisikan array <array> dengan nilai default ""
array = ["" for i in range(n+1)]

def pola(karakter1, karakter2, N):
    # Fungsi untuk membuat pola Tuan Dip dan memasukkannya ke <array>

    # KAMUS LOKAL
    # karakter1, karakter2: str
    # N: int
    # i, j: int
    # for: looping
    # if, else: conditional
    # return: returning value

    # ALGORITMA
    # Looping untuk mengisi array sejumlah <N>+1
    for i in range(N+1):
        # Kondisional jika n bernilai 0 (<array[i]> akan diisi dengan <karakter1>)
        if i == 0:
            array[i] = karakter1
        # Kondisional jika n bernilai lebih dari 0 (<array[i]> akan diisi dengan <array[i-1]>)
        if i > 0:
            check = False
            array[i] = array[i-1]
            # Kondisional jika n bernilai 1 (<array[i]> akan diisi dengan <karakter1>+<karakter2>)
            if i == 1:
                array[i] += karakter2
            else:
                checker = i+1
                while checker > 1:
                    checker = checker / 2
                if checker == 1.0:
                    check = True
                # Kondisional jika n adalah angka sesudah angka yang merupakan hasil pangkat dari 2
                if check == True:
                    # Looping untuk menambahkan <array[i]> dengan kata yang sudah dibalik
                    for j in reversed(array[i]):
                        if j == karakter1:
                            j = karakter2
                        elif j == karakter2:
                            j = karakter1
                        array[i] += str(j)         
                else:
                    # Looping untuk menambahkan <array[i]> dengan kata itu sendiri
                    for j in reversed(array[i]):
                        array[i] += str(j)
    # Mengembalikan hasil array yang terakhir
    return array[N]

# Mencetak output sesuai yang diminta pada soal
print("Pola yang didapat: " + pola(char1, char2, n))
