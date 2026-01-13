#include <stdio.h>
#include <stdlib.h>

int main(){ 
	int i, j,n,x,A[100][100],ja;
	scanf("%d",&n);
	scanf("%d",&x);
	for(i=0;i<n;i++){
		for(j=0;j<x;j++){
			scanf("%d",&ja);
			A[i][j]= ja;

		}
	}
	
	printf("Result:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n+1;j++){
			printf("%d ",A[i][j]+1);
		}
		printf("\n");
	}
}
