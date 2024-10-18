//loops
#include<stdio.h>

int main (){
    int sum;
	int start;
	int stop;
	int i=start;
	sum = 0;
	
	printf("enter start value: ");
	scanf("%d", &start);
	
	printf("enter stop value: ");
	scanf("%d", &stop);
	
	do {
	printf("%d \n",i);
	i++;
	sum = sum + i;
	
	}
	while (i<=stop);
	printf("sum is %d ", sum);
		
	return 0;
		}
		