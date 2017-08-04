
#include<stdio.h>

void main()
{
  int num,r,t,z,count=1;
  char c1='I',c2='V',c3='X',c4='L',c5='C',c6='D',c7='M';
  printf("enter the number");
  scanf("%d",&num);
  r=num%10;
  z=num/100;
  t=num%100;
  while(count<=3)
  {
      if(count==2)
      {
          z=(t-r)/10;
          c7='C';
          c6='L';
          c5='X';
      }
      if(count==3)
      {
          z=r;
          c7='X';
          c6='V';
          c5='I';
      }
      switch(z)
      {
          case 0:printf("0");
          break;
          case 1:printf("%c",c5);
          break;
          case 2:printf("%c%c",c5,c5);
          break;
          case 3:printf("%c%c%c",c5,c5,c5);
          break;
          case 4:printf("%c%c",c5,c6);
          break;
          case 5:printf("%c",c6);
          break;
          case 6:printf("%c%c",c6,c5);
          break;
          case 7:printf("%c%c%c",c6,c5,c5);
          break;
          case 8:printf("%c%c%c%c",c6,c5,c5,c5);
          break;
          case 9:printf("%c%c",c5,c7);
          break;
          case 10:printf("%c",c7);
          break;
      }
      count++;
  }
}
