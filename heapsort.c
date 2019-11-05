#include<stdio.h>


void heapify(int a[],int n,int i){
	int max,l,r,s;
	max=i;
	l=2*i;
	r=2*i+1;
	if(l<n && a[l]>a[max])
	max=l;
	if(r<n && a[r]>a[max])
	max=r;
	if(max!=i){
		s=a[i];
		a[i]=a[max];
		a[max]=s;
		heapify(a,n,max);
	}
}


void build_heap(int a[],int n){
	int i;
	for(i=n/2;i>=1;i--)
		heapify(a,n,i);
}


void heapsort(int a[],int n){
	int i,s;
	build_heap(a,n);
	for(i=n;i>=1;i--){
		s=a[1];
		a[1]=a[i];
		a[i]=s;
		heapify(a,i,1);
	}
}


void main(){
	int a[10],i,n;
	printf("Enter the number of elements in an array : ");
	scanf("%d",&n);
	fflush(stdin);
	printf("Enter the elements : \n");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	heapsort(a,n);
	printf("The Sorted array is : \n");
	for(i=1;i<=n;i++)
		printf(" %d ",a[i]);
	printf("\n");
}
