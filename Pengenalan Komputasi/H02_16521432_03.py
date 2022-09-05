# NIM/Nama  : 16521432/Syafiq Ziyadul Arifin
# Tanggal   : 26 Oktober 2021
# Deskripsi : Problem 3, program untuk mengecek apakah suatu bilangan termasuk prima atau bukan

# KAMUS
# X : int from input
# i : int for looping
# check : bool for checker

# Mulai
X = int(input("Masukkan X: "))          # Input nilai X
check = False                           # Definisikan check dengan nilai default False

for i in range(2, X):                   # Looping sebanyak (X-2) kali dimulai dari angka 2
    if X % i == 0:                      # Cek apakah nilai X merupakan kelipatan dari indeks i
        check = True                    # Set nilai checker menjadi True
if check == False:                      # Cek apakah nilai checker adalah False
    print(X, "adalah bilangan prima")   # Mencetak jika X adalah bilangan prima
else:                                   # Cek apakah nilai checker adalah True
    print(X, "bukan bilangan prima")    # Mencetak jika X bukan bilangan prima
# Selesai