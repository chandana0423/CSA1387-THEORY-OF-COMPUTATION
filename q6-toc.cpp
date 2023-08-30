#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
	char str[15];
	int l,i,c0=0,c1=0;
	printf("\n\tTHE GRAMMER PRODUCTIONS\n\tS --> 0S1 | EPS");
	printf("\n\nEnter the string:");
	scanf("%s",str);
	l=strlen(str);
    i=0;
    while(str[i]=='0'){
    	c0++;
    	i++;
	}
	while(str[i]=='1'){
    	c1++;
    	i++;
	}
	if(c0==c1)
	   printf("\nVALID INPUT");
	else
	   printf("\nINVALID INPUT");
}
