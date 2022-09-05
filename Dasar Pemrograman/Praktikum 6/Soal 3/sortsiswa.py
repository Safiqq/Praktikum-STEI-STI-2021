import tulisdata

def sort(arr):
    for i in range(1, len(arr)):
        Temp = arr[i]
        i = i-1
        while i >=0 and Temp[0] < arr[i][0]:
            arr[i+1] = arr[i]
            i -= 1
        arr[i+1] = Temp

namafile = input()
tulisdata.TulisDataSiswa(namafile)

f = open(namafile,'r')
array = []

line1 = f.readline()
if line1 == "99999999":
    print("File kosong")
else:
    while line1 != "99999999":
        line2 = f.readline()
        line3 = f.readline()
        tup = (int(line1),line2,int(line3))
        array.append(tup)
        line1 = f.readline()

    sort(array)
    for i in range(len(array)):
        print(array[i][0],end=",")
        print(array[i][1].rstrip(),end=',')
        print(array[i][2])

f.close()