#include<stdio.h> 
int main (){
	int i,j,k;
		int marks[2][2][3] = {{{34,35,35} , {45,46,47}}, {{56,57,58} , {67,68,69}}};
	for (i=0;i<2;i++){
		   	for (j=0;j<2;j++){
				for (k=0;k<3;k++){
	
	   	   	   	   	printf("marks[%d][%d][%d] = %d\n" ,i,j,k , marks[i][j][k] );
				}
	
			}
	
	}

return 0;

}