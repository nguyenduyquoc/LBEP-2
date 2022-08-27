#include <stdio.h>
#include <math.h>

int main() {
	int n;
	printf("Nhap so co 3 chu so : \n");
	do {
		printf("n = ");
		scanf("%d", &n);
	} while(abs(n) < 100 || abs(n) > 999);// Su dung abs vi so co 3 chu so co the am hoac duong
	
	//Luu cac chu so vao 1 mang
	int arr[3];
	for(int i = 0; n != 0; n /= 10 ,i++) {
		arr[i] = abs(n) % 10;
	}
	//In ra chu so trong mang
	for(int i = 2; i >= 0; i--) {
		switch (arr[i]) {
			case 1 : printf("one "); break;
			case 2 : printf("two "); break;
			case 3 : printf("three "); break;
			case 4 : printf("four "); break;
			case 5 : printf("five "); break;
			case 6 : printf("six "); break;
			case 7 : printf("seven "); break;
			case 8 : printf("eight "); break;
			case 9 : printf("nine "); break;
			default : printf("zero "); break;
		}
	}
	return 0;
}

