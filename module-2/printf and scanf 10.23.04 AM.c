#include<stdio.h>
int main()
{
    char s;
    int num;
    float pi;
    printf("Enter the char:");
    scanf("%c",&s);
    printf("\n s=%c",s);
    printf("Enter the num:");
    scanf("%d",&num);
    printf("\n num=%d",num);
    printf("Enter the float number:");
    scanf("%f",&pi);
    //printf("\n pi=%f",pi);
   //printf("\n pi=%.2f",pi);
    printf("\n pi=%.3f",pi);
}