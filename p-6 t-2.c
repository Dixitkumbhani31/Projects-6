#include<stdio.h>

main()

{
	char Email[100]="dixitkumbhani84@gmail.com";
	char pass[100]="#Dixit@123!";
	char Email1[100];
	char pass1[100];
	
	printf("Enter Your Email=");
	gets(Email1);
	printf("Enter your Password=");
	gets(pass1);
	
	if(strcmp(Email,Email1)==0)
	{
		if(strcmp(pass,pass1)==0)
		{
			printf("Login Successfully.");
		}
		else
		{
			printf("Your password incorrect and please try again!");
		}
	}
	else
	{
		printf("Wrong your email and please try again!");
	}
}
