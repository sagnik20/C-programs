#include<stdio.h>
main(){
	long int n;
	printf("\nEnter the number:");
	scanf("%d",&n);
	printf("\nThe sum of digits of the number is:%d",sum_of_digits(n));
}
int sum_of_digits(long int n){
	int r=0;
	if(n<10)
		return n;
	else
		return n%10+sum_of_digits(n/10);
}
