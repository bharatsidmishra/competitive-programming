#include<stdio.h>
//void rainTapping(int a [], ) {

int main () {
	int a[100], n,i;
	printf("Enter the Number of bar\n");
	scanf("%d", &n);

	printf("Enter the Size of Each Bar\n");
	for(int j = 0; j<n; j++) {
		scanf("%d",&a[j]);
	}
	int sum = 0;
	for(i =0; i< n; i++) {
		int k= i+1;
		while(a[k] < a[i]) {
			int d = a[i] - a[k];
			printf("%d",d);
			sum = sum + d;
			k++;
		}
		i = k;
		
	}

	printf("sum is %d", sum);
}




