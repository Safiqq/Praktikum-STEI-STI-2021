# NIM/Nama  : 16521432/Syafiq Ziyadul Arifin
# Tanggal   : 3 November 2021
# Deskripsi : Problem 3, program untuk menentukan karakter mana yang menang
#             dari Game Faiting (dengan ketentuan seperti pada soal), karakter Ric
#             selalu melakukan gerakan pertama

# KAMUS
# nyawa_awal_ric, banyak_ric, nyawa_akhir_ric : int
# nyawa_awal_kil, banyak_kil, nyawa_akhir_kil : int
# aksi_ric, aksi_kil : array
# n_ric, n_kil, n : int
# kutukan : int
# winner : bool
# i, j : int
# for, while : looping
# if, else : conditional

# Mulai
# Masukkan nyawa awal Ric dan banyak aksinya, dan definisikan array <aksi_ric>
nyawa_awal_ric = int(input("Masukkan nyawa awal Ric: "))
banyak_ric = int(input("Banyak aksi Ric: "))
aksi_ric = ["" for i in range(banyak_ric)]

# Looping untuk masukkan aksi Ric
for i in range(banyak_ric):
    aksi_ric[i] = input("Masukkan aksi Ric ke-" + str(i+1) + ": ")

# Masukkan nyawa awal Kil dan banyak aksinya, dan definisikan array <aksi_kil>
nyawa_awal_kil = int(input("Masukkan nyawa awal Kil: "))
banyak_kil = int(input("Banyak aksi Kil: "))
aksi_kil = ["" for j in range(banyak_kil)]

# Looping untuk masukkan aksi Kil
for j in range(banyak_kil):
    aksi_kil[j] = input("Masukkan aksi Kil ke-" + str(j+1) + ": ")

# Definisikan variabel <n_ric>, <n_kil>, <n> untuk digunakan dalam while looping
n_ric = 0
n_kil = 0
n = 0

# Definisikan variabel <kutukan> dengan nilai default 10 (pada soal)
kutukan = 10

# Definisikan nyawa akhir Ric dan Kil sebagai pembanding dengan nyawa awalnya
nyawa_akhir_ric = nyawa_awal_ric
nyawa_akhir_kil = nyawa_awal_kil

# Definisikan variabel <winner> untuk break looping
winner = False

# Looping untuk melakukan aksi-aksi Ric dan Kil tiap putarannya
while (nyawa_akhir_ric > 0 or nyawa_akhir_kil > 0) and winner == False:
    if n_ric < banyak_ric:
        # Kondisional jika karakter Ric melakukan healing
        if aksi_ric[n_ric] == "H":
            nyawa_akhir_ric += int(0.1 * (nyawa_awal_ric - nyawa_akhir_ric))
        # Kondisional jika karakter Ric melakukan attack
        else:
            nyawa_akhir_kil -= int(aksi_ric[n_ric])
        n_ric += 1
    else:
        n_ric = 0
    if n_kil < banyak_kil:
        # Kondisional jika karakter Kil melakukan healing
        if aksi_kil[n_kil] == "H":
            nyawa_akhir_kil += int(0.1 * (nyawa_awal_kil - nyawa_akhir_kil))
        # Kondisional jika karakter Kil melakukan attack
        else:
           nyawa_akhir_ric -= int(aksi_kil[n_kil])
        n_kil += 1
    else:
        n_kil = 0
    # Kondisional jika sudah putaran ke-5, kutukan akan dimulai
    if n >= 4:
        nyawa_akhir_ric -= kutukan
        nyawa_akhir_kil -= kutukan
        kutukan += 5
    # Kondisional jika salah satu karakter sudah mati
    if nyawa_akhir_kil <= 0 or nyawa_akhir_ric <= 0:
        winner = True
    n += 1

# Cetak output (sesuai soal) dengan kondisional jika salah satu karakter
# sudah mati
if nyawa_akhir_kil <= 0:
    print("Pemenang Game adalah Ric.")
elif nyawa_akhir_ric <= 0:
    print("Pemenang Game adalah Kil.")