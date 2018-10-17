#include<stdio.h>
void swap(int *a, int *b) {
	int * temp = a;
	a = b;
	b = temp;
	printf("a is %d and b is %d", *a,*b);
}

int main() {
	int a= 10 , b = 20;

	swap(&a,&b);
	printf(" a = %d  b = %d",a,b);
}


