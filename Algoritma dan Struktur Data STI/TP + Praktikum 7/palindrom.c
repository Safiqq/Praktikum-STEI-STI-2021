// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 21 Oktober 2022
// Topik praktikum : Pra-praktikum 7
// Deskripsi       : Menerima masukan sampai mendapat masukan 0,
//                   cek apakah bilangan palindrom

#include "stack.h"

Stack ReverseStack(Stack s)
{
    int temp;
    Stack S;
    CreateEmpty(&S);
    while (!IsEmpty(s))
    {
        Pop(&s, &temp);
        Push(&S, temp);
    }
    return S;
}

int main()
{
    int inp;
    Stack s1;
    CreateEmpty(&s1);
    scanf("%d", &inp);
    while (inp != 0)
    {
        Push(&s1, inp);
        scanf("%d", &inp);
    }
    if (!IsEmpty(s1))
    {
        int temp1, temp2;
        boolean isPalindrom = true;
        Stack s2 = ReverseStack(s1);
        while (!IsEmpty(s1) && isPalindrom)
        {
            Pop(&s1, &temp1);
            Pop(&s2, &temp2);
            if (temp1 != temp2)
                isPalindrom = false;
        }
        if (isPalindrom)
            printf("Palindrom\n");
        else
            printf("Bukan Palindrom\n");
    }
    else
        printf("Stack kosong\n");
}
