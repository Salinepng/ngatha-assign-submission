#include <stdio.h> 
#include<string.h>
struct Student{
	char name[15];
	char regNo[20];
	char email[14];
	int ID;
	int phone;
	float marks;
}student1;
int main(){
	strcpy(student1.name, "saline");
	strcpy(student1.regNo, "CT102/G/24193/24");
	strcpy(student1.email, "salinengatha@gmail.com");
	student1.ID = 58676767;
	student1.phone = 5579545;
	student1.marks = 55.9;
	
	printf("name %s \n", student1.name);
	printf("regNo %s \n", student1.regNo);
	printf("email %s \n", student1.email);
	printf("ID %d \n", student1.ID);
	printf("phone %d \n", student1.phone);
	printf("marks %f \n", student1.marks);
	
	return 0;
	
}