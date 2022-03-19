/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() 
{
  int x;
  int Rent;
  
  printf("Input the distance the van has travelled in km: ");
  scanf("%d",&x);
  
  if (x <= 30) 
{
  Rent = x * 50;
} 
else 
{
  Rent = x * 40;
}
   printf( "Rented vehicle fee is : %d\n",Rent);
  
  return 0;
}
