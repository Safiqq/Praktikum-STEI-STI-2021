masukan = input()
alas = ""
tinggi = ""
checker = False
for i in masukan:
    if i != " ":
        if checker == False:
            alas += i
        else:
            tinggi += i
    else:
        checker = True
if int(alas) > 0 and int(tinggi) > 0:
    luas = round(0.5 * int(alas) * int(tinggi))
    print(luas)
else:
    print("Alas dan tinggi harus > 0")