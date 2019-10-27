#include<stdio.h>
int main(){
	char str[100];
	int i=0,j,len;
	printf("\nEnter the string: ");
	gets(str);
	while(str[len]!='\0'){
		len++;
	}
	j=len-1;
	while(i<=len/2){
		if(str[i]==str[j]){
			i++;
			j--;
		}
		else
			break;
	}
	if(i>j){
		printf("\nPalindrome");
	}else{
		printf("\nNot Palindrome");
	}
	return 0;
}
