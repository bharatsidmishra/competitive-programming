#include<stdio.h>
int main() {
	int n, a[100];
	printf("enter number\n");
	scanf("%d",&n);
	for(int i =0; i<n; i++) {
		scanf("%d",&a[i]);
		printf("prateek");
	}
	int count =0;
	for(int i =1; i<=n; i++) {
		if (n%i== 0)
			count++;
	}
	if(count == 2)
		printf("prime");
	else
		printf("not prime");
}
