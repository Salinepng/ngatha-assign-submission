#include <stdio.h>
#include<stdlib.h>
int main (){
	
	FILE *fptr = fopen("data.txt", "w");
	
	fprintf(fptr, "good evening everyone, I hope you are doing great. \nI am doing great also. \nhave a great day.");

	
	
	fclose(fptr);
	return 0;
}