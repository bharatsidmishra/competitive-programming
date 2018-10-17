#include<stdio.h>
int main() {
	int n, a[100], stack[100],temp[100],top = 0;
	printf("Enter the N value : \n");
	scanf("%d",&n);

	printf("enter the Array Elemnts \n");

	for(int i =0; i<n; i++) 
	{
		scanf("%d", &a[i]);
	}

	for(int j =0; j<n; j++) {
		stack[0] = a[0];
		if(a[j] < a[j+1]) {
			
			temp[j] = a[j];
			top--;
			stack[top];
		}
		if(a[j] > a[j+1]) {
			stack[++top] = a[j];
		}
	}
	for(int k =0; k<n; k++) {
		printf("%5d",temp[k]);
	}
}
		


