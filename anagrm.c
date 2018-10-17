#include<stdio.h>
#include<string.h>
/*void checkAna(char[] str1, char[] str2) {
	int l1, l2;
	printf("check");
	l1 =strlen(str1);
	l2 =strlen(str2);

	printf("str1 len %d and str2 len %d", str1 , str2);

}
*/
void checkAna(char* str1, char* str2) {
	printf("enter");

}

int main() {
	char str1[100], str2[100];
	int i, j, l1, l2;

	printf("Enter First String\n");
	gets(str1);

	puts(str1);

	printf("Enter Second String\n");
	gets(str2);
	printf("cc");

	checkAna(str1,str2);
	printf("after func calling");

}
