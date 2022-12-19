#include <stdio.h>  
#include <windows.h>  

BOOL SetConsoleColor(WORD wAttributes); 

int main() {  
    SetConsoleColor(FOREGROUND_RED | FOREGROUND_INTENSITY);
	
    const int NUM  = 5000;

    for (int i = 0; i < NUM; i++) {    
        Sleep(1);  
        printf("%.2lf%%\r", i * 100.0/ NUM);  
    }  
    return 0;  
}  


BOOL SetConsoleColor(WORD wAttributes) {  
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);  
    if (hConsole == INVALID_HANDLE_VALUE) {
        return FALSE;  
	}

    return SetConsoleTextAttribute(hConsole, wAttributes);  
} 