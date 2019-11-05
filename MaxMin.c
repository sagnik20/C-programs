#include <stdio.h>
#define size 100 

void main()
{
    int ar[size], N, max, min;
    int i;

    printf("Enter size of the array: ");
    scanf("%d", &N);
    printf("Enter %d elements in array: ", N);
    for(i=0; i<N; i++)
        scanf("%d", &ar[i]);

    max = findMax(ar, N);
    min = findMin(ar, N);

    printf("Minimum element in array = %d\n", min);
    printf("Maximum element in array = %d\n", max);

}


int findMax(int A[], int n){
	if (n==1)
		return A[0];
	return max(A[n-1], findMax(A,n-1));
}
int max(int a, int b){
	if (a>b)
		return a;
	else 
		return b;
}
int findMin(int A[ ], int n){
	if (n==1)
		return A[0];
	return min(A[n-1], findMin(A,n-1));
}
int min(int a, int b){
	if (a<b)
		return a;
	else 
		return b;
}

