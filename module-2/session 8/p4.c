#include <stdio.h>
void formatPrice(int price)
{
   printf("₹%d\n", price);
}
int main()
{
   printf("tinted sunscream: ");
   formatPrice(800);
   printf("heels: ");
   formatPrice(2000);
 
   printf("dress: ");
   formatPrice(3000);
 
   return 0;
}
