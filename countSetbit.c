#include<stdio.h>
int main() {
	int n =15;
	int count =0;

	while(n) {
		if (( n & 1)) {
			count++;
		}
		n = n >> 1;
		
	}
	printf("%d  ",count);
}


