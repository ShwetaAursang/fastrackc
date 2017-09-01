#include<stdio.h>
int compare_string(char*,char*);
void main()
{
	char str1[20],str2[20],result;
	printf("enter first string\n");
	gets(str1);
	printf("enter second string\n");
	gets(str2);
	result=compare_string(str1,str2);
	if(result==0)
		printf("Both strings are equal\n");
	else
		printf("Both strings are not equal\n");
}

int compare_string(char *str1,char *str2)
{
	while(*str1==*str2)
	{
		if(*str1=='\0' || *str2=='\0')
			break;
		str1++;
		str2++;
	}
	if(*str1=='\0' && *str2=='\0')
		return 0;
	else
		return -1;
}