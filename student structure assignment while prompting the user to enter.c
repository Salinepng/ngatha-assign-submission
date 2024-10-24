#include<stdio.h>
#include<string.h>
struct Student{
	char name[12];
	char regNo[17];
	char email[15];
	int ID;
	int phone;
	float marks;
	
}student;
int main(){
	
	printf("enter student name:");
	scanf("%s", student.name);
	
	printf("enter the registrrion number:");
	scanf("%s", student.regNo);
	
	printf("enter the email address:");
	scanf("%s", student.email);
	
	printf("enter ID number:");
	scanf("%d", student.ID);
	
	printf("enter phone number:");
	scanf("%d", student.phone);
	
	printf("enter marks:");
	scanf("%f \n", student.marks);
	
	printf("name %s \n", student.name);
	printf("regNo %s \n", student.regNo);
	printf("email %s \n", student.email);
	printf("ID %d \n", student.ID);
	printf("phone %d \n", student.phone);
	printf("marks %f \n", student.marks);
	
	return 0;
	
}