#include <stdio.h>
#include <string.h>

// Function sap xep chuoi theo anphabet

void sortString(char str[]) {
	
	// Xac dinh do dai cua chuoi
	int length = strlen(str);
	char temp;

  	for (int i = 0; i < length-1; i++) {
      	for (int j = i+1; j < length; j++) {
		
        	if (str[i] > str[j]) {
        		temp = str[i];
        		str[i] = str[j];
            	str[j] = temp;
        	}
		}
  	}
  	printf("\nKet qua sau khi sap xep chuoi theo anphabet la: %s \n", str);
   
}
int main () {
	char s[100];
	printf("Nhap chuoi ki tu: ");
	scanf("%s",s);
	// Goi function
  	sortString(s);
  	return 0;
}
