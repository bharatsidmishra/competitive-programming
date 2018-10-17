#include<stdio.h>
int main() {
	char a[100], stck[100];
	int n , i;
	printf("enter the n : ");
	scanf("%d",&n);

	printf("enter the elements");

	for(i = 0; i<n; i++)
		scanf("%c",&a[i]);
	int top = -1;
	for(i =0; i<n;i++) {

		if('(' == a[i])
			stck[++top] = a[i];
		else if (')' == a[i]) {
			stck[top--];
		}
	}
	if(top == -1) {
		printf("balanced");
	}
	else 
		printf("unbalanced");

}

