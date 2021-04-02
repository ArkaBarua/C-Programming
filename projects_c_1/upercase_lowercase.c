#include<stdio.h>

int main(void){
		char ch;
		printf("Enter Your Character - \n");
		scanf("%c", &ch);
		
		if (ch >= 48 && ch <= 57){
			printf("%c is a number\n", ch);
		}else if (ch >= 65 && ch <= 90){
			printf("%c is a Uppercase Letter\n", ch);
		}else if(ch >= 97 && ch <= 122){
			printf("%c is a Lowercase Letter\n", ch);
		}else {
			printf("Special Character\n");
		}
		
	
return 0;
}
