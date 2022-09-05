# NIM/Nama  : 16521432/Syafiq Ziyadul Arifin
# Tanggal   : 6 Oktober 2021
# Deskripsi : Problem 1, program untuk menentukan kelulusan Tuan Kil pada kelas Tuan Ric

# KAMUS
# nilai_1, nilai_2, nilai_3, nilai_4 = int
# rata_rata = int

# Mulai
nilai_1 = int(input("Masukkan nilai ujian 1: "))            # Input nilai ujian pertama
nilai_2 = int(input("Masukkan nilai ujian 2: "))            # Input nilai ujian ke dua
nilai_3 = int(input("Masukkan nilai ujian 3: "))            # Input nilai ujian ke tiga
nilai_4 = int(input("Masukkan nilai ujian 4: "))            # Input nilai ujian ke empat
rata_rata = (nilai_1 + nilai_2 + nilai_3 + nilai_4) / 4     # Menghitung nilai rata-rata dari keempat ujian

if 0 <= nilai_1 <= 100 and 0 <= nilai_2 <= 100 and 0 <= nilai_3 <= 100 and 0 <= nilai_4 <= 100:
# Pengecekan apakah semua nilainya berada di rentang 0 sampai 100
    if nilai_1 >= 50 and nilai_2 >= 50 and nilai_3 >= 50 and nilai_4 >= 50:
    # Pengecekan apakah semua nilainya memiliki nilai 50 atau lebih
        if rata_rata >= 70:
        # Pengecekan apakah rata-rata ujiannya memiliki nilai 70 atau lebih
            print("Tuan Kil lulus kelas Tuan Ric.")
            # Hasil output menyatakan lulus
        else:
            print("Tuan Kil tidak lulus kelas Tuan Ric.")
            # Hasil output menyatakan tidak lulus
    else:
        print("Tuan Kil tidak lulus kelas Tuan Ric.")
        # Hasil output menyatakan tidak lulus
# Selesai