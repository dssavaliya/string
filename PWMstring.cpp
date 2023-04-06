#include<stdio.h>
#include<string.h>
int main()
{
	
    char Email[50]="dssavaliya1509@gmail.com";
    char Pass[50]="Dhruv@1526#K";
	
	char useremail[50];
	char password[50];
	printf("Enter Email id :- ");
	scanf("%s",&useremail);
	
	printf("Enter Password :- ");
	scanf("%s",&password);
	
	if(strcmp(Email,useremail)==0 && strcmp(Pass,password)==0)
	{
		printf("Login Successfully!");
	}
	else
	{
		printf("Please Check your Email id or password!");
	}
}
