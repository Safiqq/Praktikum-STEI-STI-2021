def get_max(arr, index_start):
    maks = arr[index_start]
    for i in range(index_start+1, len(arr)):
        if arr[i] > maks:
            maks = arr[i]
    return maks

def get_idx(arr, number):
    for i in range(len(arr)):
        if arr[i] == number:
            return i

def swap(array, indeks_1, indeks_2):
    array[indeks_1], array[indeks_2] = array[indeks_2], array[indeks_1]

def sort(arr):
    for i in range(len(arr)):
        maxArr = get_max(arr, i)
        maxIdx = get_idx(arr, maxArr)
        swap(arr, i, maxIdx)
    print(arr)

arr = []
count = int(input())
for i in range(count):
    arr += [int(input())]
sort(arr)