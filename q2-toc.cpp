#include<stdio.h>
#include<conio.h>
#include<string.h>
void validate();
int s_table[3][2]={{1,5},{1,2},{1,2}};
char str[10];
int main(){
	printf("\n\tTHIS DFA WILL HANDLE THE STRINGS WHICH START WITH 0 AND END WITH 1");
	printf("\nEnter any string: ");
	scanf("%s",str);
	validate();
}

void validate(){
	int l,x,i,k,c_state=0,f_state=2;
	l=strlen(str);
	if(str[0]=='0')
	   printf("0");
	for(i=0;i<l;i++){
		if(str[i]=='0')
		   x=0;
		if(str[i]=='1')
		   x=1;   
		c_state=s_table[c_state][x];
		printf("--->%d",c_state);
		if(c_state==5)
	       break;
	}
	if(c_state==f_state)
	   printf("\nVALID STRING");
	else 
	   printf("\nINVALID STRING");
}
