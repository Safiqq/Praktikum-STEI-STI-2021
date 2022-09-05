t = int(input())
b = int(input())
k = int(input())

if k == 0:
    print("FALSE")
elif t > 100 and b <= 150:
    if k != 1:
        print("TRUE")
    else:
        print("FALSE")
elif t <= 100 and b <= 150:
    if k == 1:
        print("TRUE")
    elif k == 2 and b > 30:
        print("TRUE")
    else:
        print("FALSE")
elif t <= 100 and b > 150:
    if k == 2:
        print("TRUE")
    else:
        print("FALSE")
elif 100 < t <= 200 and b > 150:
    if k == 2 or k == 3:
        print("TRUE")
    else:
        print("FALSE")
else:
    print("FALSE")