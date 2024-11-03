#include<stdio.h>
struct Student{
	char name[100];
	int marks;
	
};
int main(){
	int i;
	struct Student student[5];
	FILE *fptr = fopen("student.txt", "r");
	if (fptr == NULL){
		printf("error occured!\n");
		
		return 1;
	}
	
	for(i= 0;i<= 5;i++){
		printf("enter name of the student%s:", i+ 1);
		scanf("%s", &student[5].name);
		
		printf("enter marks %d:", i+ 1);
		scanf("%d", &student[5].marks);
		
		fprintf(fptr, "name:%s, marks:%d\n", student[5].name, student[5].marks);
	}
	fclose(fptr);
	printf("written to student.txt\n");
	
	return 0;
}