#include<stdio.h>
long long int fact(int n){
	if(n==1)
		return 1;
	else
		return n*fact(n-1);
}
main(){
	int n;
	scanf("%d",&n);
	printf("%lld",fact(n));
}
