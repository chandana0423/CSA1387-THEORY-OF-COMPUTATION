#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
	char str[15];
	int l,i,flg=0;
	printf("\n\tTHE GRAMMER PRODUCTIONS\n\tS --> 0S0 | A	\n\tA --> 1A | EPS");
	printf("\n\nEnter the string:");
	scanf("%s",str);
	l=strlen(str);
	if(((str[0]=='0')&&(str[l-1]=='0'))||((str[0]=='1')&&(str[l-1]=='1'))){
		for(i=1;i<l-1;i++){
			if(isalpha(str[i])){
				flg=1;
				break;
			}
			else if((str[i]!='1')&&(str[i]!='0')){
				flg=1;
				break;
			}
			        
		}
		if(flg==1)
		   printf("\nINVALID INPUT");
		else if(flg==0)
		   printf("\nVALID INPUT");
	}
	else
	   printf("\nINVALID INPUT");
}
