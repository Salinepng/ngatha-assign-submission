#include<stdio.h>
 
int main(){
	
	int i,j;
	int marks[2][3] = {{56,67,78}, {89,90,94}};
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("marks[%d][%d] = %d\n ", i,j , marks[i][j]);
			}
	}
			
	return 0;
	}		