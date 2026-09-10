#include <stdio.h>
int main() {
   int dailySteps[7] = {5000, 6000, 7500, 8000, 6500, 9000, 7000};
   for (int i = 0; i < 7; i++) {
       printf("Day %d: %d steps\n", i + 1, dailySteps[i]);
   }
   return 0;
}