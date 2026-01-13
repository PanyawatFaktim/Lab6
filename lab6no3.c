#include <stdio.h>
#include <stdlib.h>

int main(){ 
	int i, j,n,x,A[100][100],ja,min=9999;
	scanf("%d",&n);
	scanf("%d",&x);
	for(i=0;i<n;i++){
		for(j=0;j<x;j++){
			scanf("%d",&ja);
			A[i][j]= ja;
			if(min>ja){
				min = ja;
			}
		}
	}
	printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<x;j++){
			printf("%d ",A[i][j]+1);
		}
		printf("\n");
	}
	printf("Result: %d\n",min);	
	}
