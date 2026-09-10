#include <stdio.h>
int main() {
   int cricketScores[3][2] = {
       {100, 120},
       {130, 150},
       {160, 180}
   };
   int i;
   for (i = 0; i < 3; i++) {
       if (cricketScores[i][0] > cricketScores[i][1]) {
           printf("Match %d highest score = %d\n", i + 1, cricketScores[i][0]);
       } else {
           printf("Match %d highest score = %d\n", i + 1, cricketScores[i][1]);
       }
   }
   return 0;
}