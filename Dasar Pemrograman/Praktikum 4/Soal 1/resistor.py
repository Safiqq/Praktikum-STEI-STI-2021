# Nama  : Syafiq Ziyadul Arifin
# NIM   : 16521432

# Program Resistor
# Input: 3 float: R1, R2, R3
#        1 string: T
# Output: Nilai resistansi total, tergantung dihubungkan secara seri
#         atau paralel. Jika rangkaian dihubungkan selain seri/paralel,
#         atau nilai resistansi salah satu resistor ada yang negatif,
#         tampilkan pesan kesalahan "Masukan salah"
 
# KAMUS
# variabel
#    R1, R2, R3 : real
#    T : str
#    masukan : bool
 
# PROCEDURE
masukan = True

while masukan:
    R1 = float(input())
    R2 = float(input())
    R3 = float(input())
    T = input()
    if R1 > 0 and R2 > 0 and R3 > 0:
        if T == "S" or T == "s":
            print("{:.2f}".format(R1+R2+R3))
            masukan = False
        elif T == "P" or T == "p":
            print("{:.2f}".format((R1*R2*R3)/(R1*R2 + R1*R3 + R2*R3)))
            masukan = False
        else:
            print("Masukan salah")
    else:
        print("Masukan salah")