#include<stdio.h>

int partition(int a[] , int p, int r) {
	int x = a[0];
	int j,i;
	i = p-1;
	j = p;
	while(p<r-1) {
		if(a[j] < x) {
			i++;
			int temp = a[i];
			a[i] = a[j];
			a[j] = a[i];
		}
		j++;
	}
	return i+1;
}

void quickSort(int a[], int p,  int r) {
	printf("sid");
	for(int i =p; i<r; i++) {
		printf("%d ",a[i]);
	}
	if(p<r) {

		int q = partition(a,p,r);
//		quickSort(a,p,q-1);
//		quickSort(a,q+1,r);
	}
}	

int main() {
	int a [] = {9,5,6,11,3,4,7};
	int l = sizeof(a)/sizeof(a[0]);
	printf("size is : %d",sizeof(a)/sizeof(a[0]));

	quickSort(a,0,l);
	for (int i =0; i<l; i++) {
		printf("%d ",a[i]);
	}

}

