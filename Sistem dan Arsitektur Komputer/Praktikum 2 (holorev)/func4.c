// NIM  : 18221048
// Nama : Syafiq Ziyadul Arifin

int func4(int a, int b)
{
    if (b < a) b = func4(b, a);
    else if (a != 0) b = func4(b % a, a);
    return b;
}