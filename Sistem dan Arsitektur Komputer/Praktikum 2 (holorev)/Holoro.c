// NIM      : 18221048
// Nama     : Syafiq Ziyadul Arifin
// No. Soal : 2

void Holoro(char *inp)
{
    int arr[6];
    int *temp;

    read_six_numbers(inp, arr);

    // 0xa3 = 163
    if (arr[0] != 0xa3) illegal_move();

    temp = arr;
    do {
        if (temp[1] != ((int)*temp >> 1 ^ *temp))
            illegal_move();
        temp++;
    } while (temp != arr + 5);
}

// Possible answer(s):
// 163 242 139 206 169 253