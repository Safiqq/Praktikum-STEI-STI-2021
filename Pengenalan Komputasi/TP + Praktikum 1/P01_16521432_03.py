# NIM/Nama  : 16521432/Syafiq Ziyadul Arifin
# Tanggal   : 6 Oktober 2021
# Deskripsi : Problem 3, program untuk menghitung besar tarif parkir yang harus dibayar oleh Tuan Ric

# KAMUS
# menit = int
# jam, tarif = int

# Mulai
menit = int(input("Masukkan waktu parkir: "))   # Input lama waktu parkir dalam satuan menit

jam = menit // 60                   # Menghitung lama waktu parkir dalam satuan jam
tarif = 0                           # Definisikan variabel <tarif> dengan nilai default 0
if jam < 24:                        # Pengecekan apakah lama waktu parkir melebihi 24 jam
    if menit > 15:                  # Pengecekan apakah lama waktu parkir melebihi 15 menit
        tarif += 5000               # Karena lama waktu parkir melebihi 15 menit, maka dikenakan tarif untuk sejam pertama
        if jam >= 1:                # Pengecekan apakah lama waktu parkir melebihi 1 jam
            for i in range(jam):    # Looping untuk menambahkan tarif setiap jamnya
                tarif += 3000
        if tarif > 20000:           # Pengecekan apakah tarif melebihi 20000 rupiah
            tarif = 20000           # Jika iya, maka digunakan tarif maksimal sebesar 20000 rupiah
    print("Tarif yang harus dibayar Tuan Ric sebesar {} rupiah.".format(tarif))
    # Hasil output akan menyatakan besar tarif parkir yang harus dibayar oleh Tuan Ric