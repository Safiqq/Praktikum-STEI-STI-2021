import tulisdata

def append(array, element):
    array += [element]

namafile = input()
tulisdata.TulisDataSaham(namafile)

f = open(namafile, "r")
array = []

line1 = f.readline().rstrip()
if line1 == "99999999":
    print("File kosong")
else:
    while line1 != "99999999":
        line2 = f.readline().rstrip()
        line3 = f.readline().rstrip()
        array += [(int(line1), line2, int(line3))]
        line1 = f.readline().rstrip()

    array.sort(key=lambda tupple: tupple[0]) 
    append(array, "mark")
    i = 0

    while array[i] != "mark":
        number = array[i][0]
        sum = 0
        count = 0
        while True:
            sum += array[i][2]
            count += 1
            i += 1
            if number != array[i][0]:
                break
        average = "{:.2f}".format(sum/count) 
        print(str(number) + "=" + str(average))
f.close()