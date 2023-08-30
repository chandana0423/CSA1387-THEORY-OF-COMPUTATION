#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main(){
	char str[20];
	int l,i,flg=0;
	printf("\n\t\tS --> A101A	\n\t\tA --> 0A | 1A | EPS");
	printf("\nenter the string: ");
	scanf("%s",str);
	l=strlen(str);
	for(i=0;i<l-2;i++){
		if((str[i]!='1')&&(str[i]!='0')){
		   printf("\nINVALID CHARECTER"); 	 
		   exit(0);}
	}
	for(i=0;i<l-2;i++){
		if((str[i]=='1')&&(str[i+1]=='0')&&(str[i+2]=='1')){
			flg=1;
			break;
		}
	}
	if(flg==1)
	   printf("\nVALID STRING");
	else
	    printf("\nINVALID STRING"); 
}
