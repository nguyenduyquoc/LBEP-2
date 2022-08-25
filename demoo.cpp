#include <stdio.h>

int conghaiso(int a, int b){
	return a + b;
}


int main() {
	int a, b;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);	
	printf("ket qua = %d", conghaiso(a, b));
/*	
	int c = conghaiso(a, b);
	printf("ket qua = %d", c);	
*/	
return 0;	
}
