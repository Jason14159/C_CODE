#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <windows.h>

void screenSize(int width, int height) {

    HANDLE hOUT = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD size = {width, height};
    SetConsoleScreenBufferSize(hOUT, size);
    SMALL_RECT rc = {1, 1, width, height};
    SetConsoleWindowInfo(hOUT, 1, &rc);
    system("cls");
}

int main() {

    screenSize(1920, 1080);
    MessageBox(NULL,"Hello World!", "C图形程序" ,MB_OK);
    return 0;
}