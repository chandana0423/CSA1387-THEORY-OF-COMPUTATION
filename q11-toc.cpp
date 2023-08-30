#include <stdio.h>
#include <stdlib.h>

int nos, i, j, k, sub[10], res[10], x, l;
int s_table[7][7];
void validate(int s) {
    x = 0;
    for (j = 0; j < nos; j++) {
        if (s_table[s][j] == 1) {
            sub[x] = j;
          	printf(" %d ",j);
            x++;
        }
    }
}

int main() {
    printf("Enter the number of states: ");
    scanf("%d", &nos);
    printf("\nEnter the epsilon states.\nIf there is no state then print -1:\n");
   	for(i=0;i<nos;i++){
		for(j=0;j<nos;j++){
			printf(" \nfor position  [%d] , [%d] :  ",i+1,j+1);
			scanf("%d",&s_table[i][j]);
		}
	}
	for(i=0;i<nos;i++){
		for(j=0;j<nos;j++){
			printf(" %d ",s_table[i][j]);
		}printf("\n");
	}
	
    for (i = 0; i < nos; i++) {
        printf("Epsilon closure of state Q%d: %d ", i, i);
        validate(i);
        for (k = 0; k < x; k++) {
            res[k] = sub[k];
        }
        for (l = 0; l < x; l++) {  
            validate(res[l]);
        }
        printf("\n");
    }

    return 0;
}

