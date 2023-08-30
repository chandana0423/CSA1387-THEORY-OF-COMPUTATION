#include<stdio.h>
#include<conio.h>
#include<string.h>
int validate(char[]);
int s_table[3][2]={{1,5}
                  ,{2,1},
				   {2,1}};
char str[10];
int main(){
	int i,j,k;
	printf("\n\tTHIS DFA WILL HANDLE THE STRINGS WHICH START AND END WITH A");
	printf("\nEnter any string: ");
	scanf("%s",str);
	validate(str);
}

int validate(char str[]){
	int c_state=0,f_state=2,i,x=1;
	int l=strlen(str);
	if(str[0]=='a')
	   printf("0");
	for(i=0;i<l;i++){
		if(str[i]=='a'){
		    x=0;
		}
		else if(str[i]=='b'){
			x=1;
		}
		c_state=s_table[c_state][x];
		if(c_state==5)
		   break;
		printf("---->%d",c_state);
	}
		if(c_state==f_state)
		   printf("\nVALID STRING");
		else
		   printf("\nINVALID STRING");
}
