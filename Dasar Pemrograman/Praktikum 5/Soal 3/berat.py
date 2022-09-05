berat = int(input())
berats = ["" for i in range(999)]
panjang = 0
while berat != -999:
    if 30 <= berat <= 200:
        berats[panjang] = berat
        panjang += 1
    berat = int(input())
if panjang > 0:
    beratBawah50 = 0
    beratAtas100 = 0
    jumlah = 0
    for i in berats:
        if i != "":
            if i <= 50:
                beratBawah50 += 1
            elif i >= 100:
                beratAtas100 += 1
            jumlah += i
    print(panjang)
    print(beratBawah50)
    print(beratAtas100)
    print(round(jumlah / panjang))
else:
    print("Data kosong")