#include<stdio.h>
#include<time.h>

//Write a function that takes the 4x4 matrix that is shown below on the left and rotates it 90 degrees.

int main(){
	
	int i,j;
	int matrix[4][4];
	int matrix1[4][4];
	for(j=0;j<4;j++){
		for(i=0;i<4;i++){
			scanf("%d",&matrix[j][i]);
		}
	}
	printf("Matrix={");
	for(j=0;j<4;j++){
		printf("{");
		for(i=0;i<4;i++){
			printf("%d",matrix[j][i]);
			if(i<4-1){
				printf(",");
			}
		}
		printf("}");
		if(j<4-1){
			printf(",");
		}
	}
	printf("}");
	
    int k,l;
	int b=3;
	for(k=0;k<4;k++){
		for(l=0;l<4;l++){
			matrix1[l][b]=matrix[k][l];
		}
		b--;
	}
	
	printf("\nRotated 90 degrees Matrix={");
	for(j=0;j<4;j++){
		printf("{");
		for(i=0;i<4;i++){
			printf("%d",matrix1[j][i]);
			if(i<4-1){
				printf(",");
			}
		}
		printf("}");
		if(j<4-1){
			printf(",");
		}
	}
	printf("}");
	

	return 0;
}
