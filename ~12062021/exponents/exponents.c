#include <stdio.h>
#include <float.h>
#include <limits.h>

int main() {
	printf("float Maximum number of bytes stored: %d \a", sizeof(float));
	printf("flost Minimum value: %G \n",  FLT_MIN);
	printf("float Maximum value: %G \n", FLT_MAX);
	printf("Precision value: %d\n", FLT_DIG);
	printf("\x56 \n");
	
	return 0;
}	

/*
%E to output single and double presision real nnumbers in exponential form
老师邮箱地址 wj4648@gmail.com

0101 0011 0111 0100 0110 0001 0111 1001 0010 0000 0100 1000 0111 0101
8421 8421 8421 8421 8421 8421 8421 8421 8421 8421 8421 8421 8421 8421 
5		3		 7		  4	   6       1       7       9       2       0       4       8       7       5

转义序列			定义

\\						\
\'						'
\"						"
\?						?
\a						alarm ringing
\b						backspace key
\f						next page
\n						new line
\r						carridge return
\t						horizontal tab
\v						vertical tab
\ooo					1-3 octal numbers
\xhh					hexdecimal numbers
*/