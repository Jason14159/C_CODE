#include <stdio.h>
#define N 3

/* 
4. 一个班级有N名学生，每个学生有4们课程（文学、数学、物理、C语言）
计算每个学生的平均分。N最少是3.
*/

int main (void) {
    
    float a[N][5],sum; 
    int i, j ;
    printf ("输入%d个学生信息（语、数、外、C语言成绩）：\n",N);

    for(i=0;i<N;i++) {
        sum=0.0; 
        printf ("NO%d:",i+1);
        for (j=0; j<4; j++) {
            scanf("%f",&a[i][j]);
            sum+=a[i][j];
        }
        a[i][4]=sum/4; 
    }

    printf ("\n学号\t语文\t\t数学\t\t外语\t\tC语言\t\t平均成绩\n");

    for(i=0;i<N;i++) {
        printf("NO%d:\t", i+1);
        for(j=0;j<5;j++)
            printf ("%f\t",a[i][ j]) ;
        printf ("\n");
    }
    return 0;
}