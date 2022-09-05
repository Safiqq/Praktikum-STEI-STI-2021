N = int(input())
while N <= 0 or N > 100:
    print("Masukan salah. Ulangi!")
    N = int(input())
nilais = []
for i in range(N):
    nilai = input()[0]
    nilais.append(nilai)
CC = input()[0]
checker = False
for i in range(N):
    if CC == "S" or CC == "s":
        if 97 <= ord(nilais[i]) <= 122 and checker == False:
            print(i + 1, nilais[i])
            checker = True
    elif CC == "L" or CC == "l":
        if 65 <= ord(nilais[i]) <= 90 and checker == False:
            print(i + 1, nilais[i])
            checker = True
    elif CC == "X" or CC == "x":
        if (ord(nilais[i]) < 65 or 90 < ord(nilais[i]) < 97 or ord(nilais[i]) > 122) and checker == False:
            print(i + 1, nilais[i])
            checker = True
if checker == False:
    if CC == "S" or CC == "s":
        print("Tidak ada huruf kecil")
    elif CC == "L" or CC == "l":
        print("Tidak ada huruf besar")
    elif CC == "X" or CC == "x":
        print("Semua huruf")
    else:
        print("Tidak diproses")