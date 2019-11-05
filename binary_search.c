#include <stdio.h>
 
void main(){
   int c, low, last, middle, n, search, array[100];
   printf("Enter number of elements : ");
   scanf("%d",&n);
   printf("Enter %d integers\n", n);
   for (c = 0; c < n; c++)
      scanf("%d",&array[c]);
   printf("Enter value to find\n");
   scanf("%d", &search);
   low = 0;
   last = n - 1;
   middle = (low+last)/2;
   while (low <= last) {
      if (array[middle] < search)
         low = middle + 1;    
      else if (array[middle] == search) {
         printf("%d found at location %d.\n", search, middle+1);
         break;
      }
      else
         last = middle - 1;
      middle = (low + last)/2;
   }
   if (low > last)
      printf("Sorry! %d isn't present in the list.\n", search);
}
