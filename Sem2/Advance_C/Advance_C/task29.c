#include<stdio.h>

int main(){
	char str[100];

	printf("Enter a sentence: ");
	fgets(str, sizeof(str), stdin);

	for(int  i=0; str[i] != '\0' && str[i] != '\n'; ++i){
		if(str[i] >='a' && str[i] <='z'){
			str[i] + str[i]-32;
		}else if(str[i]>='A' && str[i] <= Z){
			str[i]=str[i]+32;
		}
	}

	printf("The sentence after changing the case of all character is: %s",str);
	return 0;
}