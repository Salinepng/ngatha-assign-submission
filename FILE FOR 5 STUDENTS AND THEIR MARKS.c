#include<stdio.h>
#include<stdlib.h>

int main (){

FILE *fptr = fopen("student.txt", "w");

fprintf(fptr, "JIM, 54\nPAM, 76\nOSCAR, 87\nANN, 90\nJUNE, 76");

fclose(fptr);
   return 0;
}