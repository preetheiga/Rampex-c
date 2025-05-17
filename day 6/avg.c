#include <stdio.h>

int main() {
   int array[10] = {1, 2, 3, 4, 5};
   int sum ,i;
   float avg;

   sum = avg = 0;
   
   for(i = 0;i<5;i++) {
      sum = sum + array[i];
   }
   
   avg = (float)sum /i;
   printf("Average of array values is %.2f", avg);   
   
   return 0;
}