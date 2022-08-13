#include<stdio.h>
int main()
{
	char grade,A,B;
	
	printf("enter your grade(A-F)");
	scanf("%c",&grade);
	
	switch(grade)
	{
		case 'A':
			{
				printf("excellent");
			}
			break;
		
		case 'B':
			{
				printf("well done");
			}
			break;
			
		case 'C':
			{
			    printf("average");	
			}
			break;
			
		case 'D':
			{
				printf("pass");
			}
			break;
			
		case 'E':
		    {
		    	printf("insufficient");
			}
			break;
			
		case 'F':
	        {
	        	printf("fail");
			}
			break;
				
		default:
			{
				printf("invalid grade");
			}
		
		    
		
	}
	
	return 0;
}
