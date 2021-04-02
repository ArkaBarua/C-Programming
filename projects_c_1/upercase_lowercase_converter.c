#include<stdio.h>

int main(){
	char ch;
	
	printf("Enter Your Character -");
	scanf("%c", &ch);

	if (ch >= 'A' && ch <= 'Z'){
		printf("Lowecase of %c is %c\n", ch, ch + 32);
	}else if(ch >= 'a' && ch <= 'z'){
		printf("Uppercase of %c is %c\n", ch , ch + 32);
		}else {
			printf("Invalid Letter\n");
		}
		return 0;
}