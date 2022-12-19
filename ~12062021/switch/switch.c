 #include <stdio.h>
 
 int main() {
	 int a = 0;
	 
	 switch(a) {
		case 0:
			printf("This is a 0\n");
			// break;
		case 5:
			printf("this is a 5\n");
			// break;
		case 10:
			printf("This is a 10\n");
			break;
		default:
			printf("Nothing\n");
			break;
	 }
 }