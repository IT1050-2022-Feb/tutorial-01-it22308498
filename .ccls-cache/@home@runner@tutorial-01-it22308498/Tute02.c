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

int main() {
  int d, rate, d1;

  // get the traveled distance
  printf("Input the distance the van has travelled :");
  scanf("%d", &d);

  if (d <= 30) {
    rate = d * 50;

  } else if (d > 30) {
    d1 = (d - 30);
    rate = (30 * 50) + (d1 * 40);
  }

  printf("The rate is %d", rate);

  return 0;
}
