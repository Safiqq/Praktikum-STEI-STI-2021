# NIM/Nama  : 16521432/Syafiq Ziyadul Arifin
# Tanggal   : 6 Oktober 2021
# Deskripsi : Problem 2, program untuk menentukan pembagian kelas mata kuliah Pengenalan Komputasi
#             yang diampu oleh Tuan Ric jika jumlah mahasiswa setiap kelasnya sama dan tidak sama

# KAMUS
# mahasiswa, kelas = int
# sisa, perkelas = int

# Mulai
mahasiswa = int(input("Masukkan jumlah mahasiswa: "))       # Input jumlah mahasiswa
kelas = int(input("Masukkan jumlah kelas: "))               # Input jumlah kelas

perkelas = mahasiswa // kelas           # Menghitung jumlah kelas dengan mahasiswa yang sedikit
sisa = mahasiswa % kelas                # Menghitung jumlah mahasiswa yang belum mendapat kelas
if sisa == 0:                           # Pengecekan apakah seluruh mahasiswa sudah mendapat kelas
    print("Setiap kelas memiliki {} mahasiswa.".format(mahasiswa // kelas))
    # Hasil output jika seluruh mahasiswa sudah mendapat kelas
else:
    print("Ada {} kelas yang memiliki {} mahasiswa dan {} kelas yang memiliki {} mahasiswa.".format(sisa, perkelas+1, kelas-sisa, perkelas))
    # Hasil output jika seluruh mahasiswa sudah mendapat kelas
# Selesai