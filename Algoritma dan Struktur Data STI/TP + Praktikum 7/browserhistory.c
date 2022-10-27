// NIM             : 18221048
// Nama            : Syafiq Ziyadul Arifin
// Tanggal         : 21 Oktober 2022
// Topik praktikum : Praktikum 7
// Deskripsi       : Implementasi dari browserhistory.h

#include <stdio.h>
#include "browserhistory.h"

void browserHistoryVisit(Stack *openedTab, Stack *history, char *url)
{
    Push(openedTab, url);
    Push(history, url);
}

char *currentUrl(Stack *openedTab)
{
    return InfoTop(*openedTab);
}

char *browserHistoryBack(Stack *openedTab, Stack *history, int steps)
{
    int i;
    infotype url;
    for (i = 0; i < steps; i++)
    {
        Pop(openedTab, &url);
        Push(history, url);
    }
    return currentUrl(openedTab);
}

char *browserHistoryForward(Stack *openedTab, Stack *history, int steps)
{
    int i;
    infotype url;
    for (i = 0; i < steps; i++)
    {
        Pop(history, &url);
        Push(openedTab, url);
    }
    return currentUrl(openedTab);
}

void browserHistoryFree(Stack *history)
{
    CreateEmpty(history);
}