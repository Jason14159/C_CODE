#include <stdio.h>
#include <time.h>
#include <windows.h>
#define FREQUENCY 3.2

void foo() {
    long i;
    for (i = 0; i < 100000000; i++) {
        long a = 0;
        a = a + 1;
    }
}

void gettime1() {

    time_t start,stop;
    start = time(NULL);
    foo();//dosomething
    stop = time(NULL);
    printf("Use Time:%ld seconds\n",(stop-start));
} 

void gettime2() {

    double dur;
    clock_t start,end;
    start = clock();
    foo();//dosomething
    end = clock();
    dur = (double)(end - start);
    printf("Use Time:%f seconds\n",(dur/CLOCKS_PER_SEC));
} 

/* void main() {

    DWORD t1,t2;
    t1 = timeGetTime();
    foo();//dosomething
    t2 = timeGetTime();
    printf("Use Time:%f\n",(t2-t1)*1.0/1000); //! 这个有错误
}  */

void gettime3() {  //最准确
    
    LARGE_INTEGER t1,t2,tc;
    QueryPerformanceFrequency(&tc);
    QueryPerformanceCounter(&t1);
    foo();//dosomething
    QueryPerformanceCounter(&t2);
    printf("Use Time:%f seconds\n",(t2.QuadPart - t1.QuadPart)*1.0/tc.QuadPart);
} 

void main() {

    gettime1();
    gettime2();
    gettime3();
}