#include<stdio.h>
#include<string.h>

int main() {
	int i,j,n,count;
	char a[]= {"ssmmmmrrrtt"},c;

	n = strlen(a);

	i = 0;
	j = 0;
	c = a[0];
	for(int k =0; k<n;k++) {
		
		if(c == a[k]) {
			count++;
			if(k == n-1) 
				printf("%c%d",c ,count);
				
			
		}
		else {
			c = a[k];
			printf("%c",a[k-1]);
			printf("%d",count);
			j = j+1;
			count = 0;
			k--;
		}
		
	}
}
