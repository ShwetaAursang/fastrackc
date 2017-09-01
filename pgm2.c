#include<stdio.h>

int string_length(char*);

void main()
{
	
	char str[20];
	int len;
	printf("Enter any string\n");
	gets(str);
	len=string_length(str);
	printf("Length of the given string %s is:%d\n",str,len);
}

int string_length(char* s)
{
	int count=0;
	while(*s!='\0')
	{
		count++;
		s++;
	}
	return count;
}