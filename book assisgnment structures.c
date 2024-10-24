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
	struct Book book;
	strcpy(book.title,"Introduction to  C Programming");
	strcpy(book.author,"\nJohn Smith");
	book.publicationY = 2022;
	strcpy(book.ISBN,"9780131103627");
	book.price = 49.99;

printf("title %s\n", book.title);
printf("author %s\n", book.author);
printf("publicationY %d\n", book.publicationY);
printf("ISBN %s\n", book.ISBN);
printf("price %f\n", book.price);

return 0;

	
}