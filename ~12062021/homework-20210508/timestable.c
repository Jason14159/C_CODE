#include <stdio.h>

int main() {
    int i , j;
    for(i = 1; i <= 9; i++){
        for(j = 1; j <= 9; j++){
            if(j < i) {
                //打印八个空格，去掉空格就是左上三角形 
                printf("");
			}
            else {
                printf("%d*%d=%2d  ", i , j , i * j);
			}
        }
        printf("\n");  
    }
    return 0;
}