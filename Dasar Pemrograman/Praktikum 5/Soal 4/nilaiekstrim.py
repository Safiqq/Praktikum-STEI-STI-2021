N = int(input())
nilais = []
for i in range(N):
    nilai = int(input())
    nilais.append(nilai)
    if i == 0:
        maksimum = nilai
        minimum = nilai
    if nilai >= maksimum:
        maksimum = nilai
    if nilai <= minimum:
        minimum = nilai
X = int(input())
checker = False
for i in nilais:
    if i == X and checker == False:
        if X == maksimum:
            print("maksimum")
        if X == minimum:
            print("minimum")
        if X != maksimum and X != minimum:
            print("N#A")
        checker = True
if checker == False:
    print(X, "tidak ada")