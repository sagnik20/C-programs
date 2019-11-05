#include<stdio.h>
main(){
	int n,i,key,search;
	printf("\nEnter the number of terms:");
	scanf("%d",&n);
	int ar[n];
	printf("\nEnter sorted array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&ar[i]);
	printf("\nEnter the key to search:");
	scanf("%d",&key);
	search = BinarySearch(ar,0,n-1,key);
	printf("%d",search);
	if(search==-1)
		printf("\nItem not present.");
	else
		printf("\nThe key %d is present at %dth location.",key,search+1);
}
int BinarySearch(int ar[],int beg,int end,int key){
	int mid;
	if(beg>end)
	return -1;
	else{
		mid=(beg+end)/2;
		if(key==ar[mid])
			return mid;
		else if(key<ar[mid])
			return BinarySearch(ar,beg,mid-1,key);
		else if(key>ar[mid])
			return BinarySearch(ar,mid+1,end,key);
	}
}
