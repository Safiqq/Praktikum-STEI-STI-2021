# NIM/Nama  : 16521432/Syafiq Ziyadul Arifin
# Tanggal   : 3 Oktober 2021
# Deskripsi : Problem 3, program untuk menentukan jenis suatu bilangan (positif genap, positif ganjil, negatif, atau nol)

X = int(input("Masukkan X: "))      # Input nilai X
hasil = ""                          # Definisikan variabel "hasil" untuk memudahkan praktikan

if X > 0:                           # Pengecekan apakah X bernilai positif
    if X % 2 == 0:                  # Pengecekan apakah X merupakan bilangan genap
        hasil = "positif genap"
    else:                           # Jika X bukan merupakan bilangan genap, maka X merupakan bilangan ganjil
        hasil = "positif ganjil"
elif X == 0:                        # Pengecekan apakah X bernilai 0
    hasil = "nol"
else:                               # Jika X tidak bernilai positif dan X tidak bernilai 0, maka X bernilai negatif
    hasil = "negatif"
print("X adalah bilangan", hasil)   # Hasil output akan membentuk format sesuai pada contoh