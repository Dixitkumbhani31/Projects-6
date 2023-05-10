#include<stdio.h>

main()

{
	char s1[100];
	char s2[100];
	
	printf("Enter String=");
	gets(s1);
	
	strcpy(s2,s1)==0;
	strrev(s2)==0;
	
	if(strcmp(s1,s2)==0)
	{
		printf("String is Palindrom");
	}
	else
	{
		printf("String is Not palindrom");
	}
}
