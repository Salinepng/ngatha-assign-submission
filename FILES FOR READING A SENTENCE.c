#include <stdio.h>
#include<stdlib.h>
int main (){
	
	char sentence[100];
	FILE *fptr = fopen("data.txt", "r");
	
	fprintf(sentence, 100, fptr);
	fscanf("%s", &sentence);
	
	
	
	fclose(fptr);
	return 0;
}