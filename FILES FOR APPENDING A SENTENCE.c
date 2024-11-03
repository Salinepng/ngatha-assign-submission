#include <stdio.h>
#include<stdlib.h>
int main (){
	
	FILE *fptr = fopen("data.txt", "a");
	
	
	
	fprintf(fptr, " \nHello everyone, I hope your day was great.");
	
	
	fclose(fptr);
	return 0;
}