#include<stdio.h>
int main(){
	int age;
	int income;
	
	printf("age");
	scanf("%d", &age);
	
	printf("income");
	scanf("%d", &income);
	
	if (age >= 21 && income >= 21000) {
		printf("congratulations you qualify for a loan");
	}
    else{
		printf("unfortunately, we are unable to offer you a loan at this time");
	}	
	return 0;
	}