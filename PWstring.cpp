#include<stdio.h>
#include<string.h>
int main()
{
	
    char ch[50];
	int i,p,letter=0,digit=0,symbol=0;
	
	printf("Enter Password : ");
	scanf("%s",&ch);
	if(strlen(ch)>=6)
	{
	 p=strlen(ch);
	for (i=0;i<p;i++)
	  {
		if ((ch[i]>='a' && ch[i]<='z') ||(ch[i]>='A' && ch[i]<='Z'))
    	{
	    letter = 1;
    	}
    	else if(ch[i]>='0' && ch[i]<='9') 
    	{
	    digit = 1;
    	}
    	else
		{
    	symbol=1;
		}			
	  }
    	if(letter==1 && digit ==1 &&symbol==1)
    	{
    	printf("Password is Valid.\n");	
        }
        else
    	{
        printf("Password Must Contain At least one letter,one digit and one spacial symbol.\n");
    	}
    }
	else
	{
    printf("Password must be at least 6 character long.\n");
	}
	return 0;	


	
}
