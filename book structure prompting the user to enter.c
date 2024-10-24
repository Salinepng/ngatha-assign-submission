#include<stdio.h>
#include<string.h>
struct Book{
	char title[30];
	char author[30];
	int publicationY;
	char ISBN[13];
	float price;
	
};
int main(){
	struct Book book1;
	printf("enter the book title: ");
	scanf("%s", &book1.title);
	
	printf("enter the name of the author: ");
	scanf("%s", &book1.author);
	
	printf("enter the year of publication: ");
	scanf("%d", &book1.publicationY);
	
	printf("enter ISBN: ");
	scanf("%s", &book1.ISBN);
	
	printf("enter the price: ");
	scanf("%f", &book1.price);
	
	printf("\ntitle %s \n", book1.title);
	printf("author %s \n", book1.author);
	printf("publicationY %d \n", book1.publicationY);
	printf("ISBN %s \n", book1.ISBN);
	printf("price %f \n", book1.price);
	
	return 0;
}