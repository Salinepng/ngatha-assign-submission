#include<stdio.h>
#include<stdlib.h>

int main(){
	char lines[15];
	FILE * fptr = fopen("student.txt", "r");
	
	fprintf(lines, 15, fptr);
	fscanf("%s", lines);
	
	fclose(fptr);
	
}