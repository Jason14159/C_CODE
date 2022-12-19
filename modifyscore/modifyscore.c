#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
struct Book
{
	char name[20];
	short price
};
int main()
{
	struct Book b1 = { "C语言", 66 };
	struct Book b2 = { "C++", 55 };
	struct Book* pb = &b1;
	//printf("%d\n", pb); //打印b1的地址
	b1.price = 10;
	strcpy(b1.name, "ptthon"); 
	
	//方法一：
	printf("书名：%s\n", b1.name);
	printf("价格: %d\n", b1.price);
	printf("书名：%s\n", b2.name);
	printf("价格: %d\n", b2.price);

	//方法二：
	printf("%s\n", pb->name);  //打印书名
	printf("%d\n", pb->price);  //打印价格

	//方法三：
	printf("%s\n", (*pb).name);  //打印书名
	printf("%d\n", (*pb).price);  //打印价格
	return 0;
}
