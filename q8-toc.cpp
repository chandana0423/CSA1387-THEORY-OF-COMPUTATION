#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void validate();
int s_table[3][2]={{5,1},{2,1},{2,1}},i,f;
char str[10];
int main(){
	printf("enter the string :");
	scanf("%s",str);
for(i=0;str[i]!='\0';i++)	
	if(!isalpha(str[i])){
		f=1;
		break;}
for(i=0;i<strlen(str);i++){
			if((str[i]!='a')&&(str[i]!='b')){
			    f=1;
			    break;
		}
	}
if(f==1)
   printf("INVALID CHARECTERS");
else
   validate();
}
void validate(){
	int l=strlen(str),c_state=0,f_state=2,x;
	for(i=0;i<l;i++){
		if(str[i]=='a')
		    x=0;
		if(str[i]=='b')
		    x=1;
		c_state=s_table[c_state][x];
		printf("-->%d",c_state);
		if(c_state==5)
		  exit(0);
	}
	if(c_state==f_state)
	   printf("VALID STRING");
	else
	   printf("INVALID STRING");
}
