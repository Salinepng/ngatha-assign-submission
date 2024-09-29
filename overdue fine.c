//program to calculate the fine for overdue library books;
/*
Author:saline;
Registration no:CT102/G/24193/24;
Date:27/09/24;
*/
//program to calculate the fine for overdue library books;
#include<stdio.h>

int main(){
	int book_ID;
	int due_date;
	int return_date;
	int days_overdue;
	int fine_rate;
	int fine_amount;
	
printf("enter the book ID: ");
scanf("%d", &book_ID);

printf("enter the due date: ");
scanf("%d", &due_date);

printf("enter the return date: ");
scanf("%d", &return_date); 
if (return_date > due_date) { 

days_overdue = return_date - due_date;
  } 
  else {days_overdue = 0;}
  	
//determining the fine rate
    if ( days_overdue  >=7 ) { fine_rate = 20 ;
	}
       else if ( days_overdue >=8 && days_overdue <= 14) { fine_rate = 50 ;
	   }
       else if ( days_overdue >= 15) { fine_rate = 100  ;
	   }
       else { fine_rate = 0 ;
	    }

//determining the fine amount;
     fine_amount = days_overdue * fine_rate;
    printf("book ID %d\n", book_ID);
	printf("due date %d\n", due_date);
	printf("return date %d\n", return_date);                                                       
	printf("days overdue %d\n", days_overdue);
	printf("fine rate %d\n" , fine_rate);
	printf("fine amount %d\n" ,fine_amount);

	
	return 0;
	}