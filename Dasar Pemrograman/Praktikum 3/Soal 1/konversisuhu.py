t = float(input())
k = input()

if k == "R":
    print("{:.2f}".format(4/5 * t))
elif k == "F":
    print("{:.2f}".format(9/5 * t + 32))
elif k == "K":
    print("{:.2f}".format(t + 273.15))