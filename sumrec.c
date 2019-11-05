#include<stdio.h>
main(){
	int n;
	printf("Enter the no of terms:");
	scanf("%d",&n);
	printf("\nThe sum upto first %d numbers is %d",n,sum(n));
}
int sum(int n){
	if(n==1)
		return n;
	else
		return n+sum(n-1);
}
