#include <stdio.h>
 
void main()
{
  int array[100], n, i, d, temp;
  printf("Enter number of elements: ");
  scanf("%d", &n);
  printf("Enter %d integers\n", n);
  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);
  for (i = 0 ; i < n - 1; i++) {
    for (d = 0 ; d < n - i - 1; d++){
      if (array[d] > array[d+1]){
        temp = array[d];
        array[d] = array[d+1];
        array[d+1] = temp;
      }
    }
  }
 
  printf("Sorted list in asiending order:\n");
 
  for (i = 0; i < n; i++)
     printf("%d\t", array[i]);
 
  printf("\n");
}
