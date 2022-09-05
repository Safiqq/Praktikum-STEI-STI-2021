# NIM/Nama  : 16521432/Syafiq Ziyadul Arifin
# Tanggal   : 3 Oktober 2021
# Deskripsi : Problem 2, program kalkulator sederhana dengan 3 input (2 buah angka dan 1 karakter operasi)
#             Output akan menunjukkan operasi yang dilakukan dan hasilnya

angka_1 = int(input("Masukkan angka pertama: "))    # Input angka pertama
angka_2 = int(input("Masukkan angka kedua: "))      # Input angka kedua
operator = input("Masukkan operator: ")             # Input jenis operator yang akan digunakan
hasil = 0                                           # Definisikan variabel "hasil" untuk memudahkan praktikan

if operator == "+" or operator == "-" or operator == "*" or operator == "/" or operator == "%":
    if operator == "+":                             # Pengecekan apakah operasi matematikanya penjumlahan
        hasil = angka_1 + angka_2
    elif operator == "-":                           # Pengecekan apakah operasi matematikanya pengurangan
        hasil = angka_1 - angka_2
    elif operator == "*":                           # Pengecekan apakah operasi matematikanya perkalian
        hasil = angka_1 * angka_2
    elif operator == "/":                           # Pengecekan apakah operasi matematikanya pembagian
        hasil = angka_1 // angka_2                  # Hasil pembagian akan dibulatkan ke bawah agar mendapat output bertype integer
    elif operator == "%":                           # Pengecekan apakah operasi matematikanya mencari nilai sisa pembagian
        hasil = angka_1 % angka_2
    print(angka_1, operator, angka_2, "=", hasil)   # Hasil output akan membentuk format sesuai operasi yang dilakukan
else:
    print("Operator tidak tersedia")