/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int main() {
   int no1, no2;
   int max;
   int min;
   int multi;
   
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   
   printf("%d ", min(no1, no2));
   printf("%d ", max(no1, no2));
   printf("%d ", multi(no1, no2));

  int max(int no1, int no2)
  {
    return (no1 > no2 ) ? no1 : no2;
  }

  int min(int no1, int no2) 
  {
    return (no1 < no2 ) ? no2 : no1;
  }
  
int multi(int no1, int no2)
  {
    return (no1 * no2);
  }
  
   return 0;
}

