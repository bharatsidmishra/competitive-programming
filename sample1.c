#include<stdio.h>
#include<stdlib.h>
int main() {
	int n, i, *arr;
	printf("n : ");
	scanf("%d",&n);

	arr = (int*)calloc(n , sizeof(int));

	for(i = 0; i<n; i++) {
		scanf("%d",arr + i);
		printf("%d",*(arr +i));
	}

}
