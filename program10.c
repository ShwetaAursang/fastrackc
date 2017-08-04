#include<stdio.h>

void main()
{
   char ch;
   printf("Enter an alphabet\n");
   scanf("%c", &ch);
   if('a' <=  ch && ch <= 'z')
   {
      printf("Upper case of %c is %c\n", ch, ch-32);
   }
   if('A' <=  ch && ch <= 'Z')
   {
      printf("Lower case of %c is %c\n", ch, ch+32);
   }
  
}
