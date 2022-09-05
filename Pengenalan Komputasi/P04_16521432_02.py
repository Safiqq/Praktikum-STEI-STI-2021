# NIM/Nama  : 16521432/Syafiq Ziyadul Arifin
# Tanggal   : 17 November 2021
# Deskripsi : Problem 2, program untuk membuat singkatan (dengan menggunakan fungsi) dari kata yang diinput

# KAMUS
# banyak: int
# panjang: array (int)
# kata: array (str)
# singkatan: func(with 2 parameters)
# for: looping
# if, else: conditional

# ALGORITMA
# Masukkan nilai <banyak> dan definisikan array int <panjang> dan array str <kata> 
banyak = int(input("Masukkan banyak kata: "))
panjang = [0 for i in range(banyak)]
kata = ["" for j in range(banyak)]

# Definisikan fungsi <singkatan()> dengan parameter str <string> dan int <length>
def singkatan(string, length):
    # Fungsi untuk mengembalikan hasil kata yang sudah disingkat

    # KAMUS LOKAL
    # string, hasil: str
    # length, count: int
    # i: int
    # if, else: conditional
    # return: returning value

    # ALGORITMA
    # Definisikan hasil dengan nilai default huruf pertama dari str<string> dan int<count> dengan nilai default 1
    hasil = string[0]
    count = 1
    
    # Looping untuk menghasilkan singkatan sesuai yang diminta pada soal
    for i in range(length):
        if i > 0:
            # Kondisional jika huruf <i> sama dengan huruf sebelumnya
            if string[i] == string[i-1]:
                count += 1
                # Kondisional jika huruf <i> merupakan huruf terakhir pada <string>
                if i == (length-1):
                    hasil += str(count)
            # Kondisional jika huruf <i> merupakan huruf yang berbeda dengan huruf sebelumnya
            else:
                hasil += str(count) + string[i]
                count = 1
    # Mengembalikan <hasil> sebagai hasil dari fungsi
    return hasil

# Looping untuk input panjang kata ke-<i> dan kata ke-<i>
for i in range(banyak):
    # Masukkan panjang kata ke-<i> ke dalam array <panjang> dan kata ke-<i> ke dalam array <kata>
    panjang[i] = int(input("Masukkan panjang kata ke-" + str(i+1) +": "))
    kata[i] = input("Masukkan kata ke-" + str(i+1) + ": ")

    # Cetak output dengan isi dan urutan sesuai yang diminta pada soal
    print("Singkatan kata ke-" + str(i+1) + ": " + singkatan(kata[i], panjang[i]))
