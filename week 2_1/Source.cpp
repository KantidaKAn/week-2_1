#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int x ;
	scanf("%d", &x);
	if (x > 0) {
		printf("> 0");
	}
	else if (x < 0) {
		printf("< 0");
	}
	else {
		printf("= 0");
	}
	return 0;
}