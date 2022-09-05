nilai = int(input())
nilais = []
if nilai == -9999:
    print("Data nilai kosong")
else:
    while nilai != -9999:
        if 0 <= nilai <= 100:
            nilais.append(nilai)
        nilai = int(input())
    if len(nilais) > 0:
        lulus = 0
        tidakLulus = 0
        jumlah = 0
        for i in nilais:
            if i >= 40:
                lulus += 1
            else:
                tidakLulus += 1
            jumlah += i
        print(len(nilais))
        print(lulus)
        print(tidakLulus)
        print("%.2f" % (jumlah / len(nilais)))
    else:
        print(0)