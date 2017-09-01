#include<stdio.h>
#include<string.h>
void main()
{
	char str[20],*s;
	int len,i;
	printf("Enter a string:\n");
	gets(str);
	s=str;
	for(i=0;i<20;i++)
	{
		if(*s=='\0')
			break;
		s++;
	}
	len=i;
	s--;
	printf("Reversed string:\n");
	for(i=len;i>0;i--)
	printf("%c",*s--);
}