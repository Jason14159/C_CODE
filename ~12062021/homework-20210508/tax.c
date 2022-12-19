#include <stdio.h>
#include <math.h>

/*
思路：
	输入工资
	判断工资大小和对应的税
	打印
 */

void main() {

	float f1, f2, f3;
    printf("Enter a number which is 6 dp and within 10000-180000 ");
    scanf("%f1",&f1);
    printf("Value = %f1", f1);
	
	f1 = 

 	//using switch
	switch(f2) {
		case 10000 ...  14000:
			f3 = f1 * 0.105;
			printf("你要交的税是：$%lu\n", d3);
			break;
		case 14001 ... 48000:
			f3 = f1 * 0.175;
			printf("你要交的税是：$%lu\n", d3);
			break;
		case 48001 ... 70000:
			f3 = f1 * 0.3;
			printf("你要交的税是：$%lu\n", d3);
			break;
		case 70001 ... 180000:
			f3 = f1 * 0.33;
			printf("你要交的税是：$%lu\n", d3);
			break;
		case 180001 ... 99999999:
		 	f3 = f1 * 0.39;
			printf("你要交的税是：$%lu\n", d3);
		default:
			printf("Your input is illegal, try again\n");
	}

	// using if else 


	printf("Enter a value between 10000\n");
	scanf("%lu", &d1);

	if (10001 <= d1 <= 14000); {
		d3 = d1 * 0.105;
		printf("你要交的税是：$%lu\n", d3);
	} if (14001 <= d1 <= 48000); {
		d3 = d1 * 0.175;
		printf("你要交的税是：$%lu\n", d3);
	} if (480001 <= d1 <= 70000); {
		d3 = d1 * 0.3;
		printf("你要交的税是：$%lu\n", d3);
	} if (70001 <= d1 <= 180000); {
		d3 = d1 * 0.33;
		printf("你要交的税是：$%lu\n", d3);
	} if (1800001 <= d1 <= 99999999); {
		d3 = d1 * 0.39;
		printf("你要交的税是：$%lu\n", d3);
	} if (0 <= d1 <= 10000 || 99999999 <= d1 <= 99999999999999999) {
		printf("Your input is illegal, try again");
	} 
}