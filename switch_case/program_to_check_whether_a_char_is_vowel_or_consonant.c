#include<stdio.h>
int main()
{
	
	char alphabet;
	
	printf("enter an alphabet:");
	scanf("%c",&alphabet);
	
	switch(alphabet)
	{
		case 'a':
		case 'A':
	    case 'e':
	    case 'E':
	    case 'i':
	    case 'I':
	    case 'o':
	    case 'O':
	    case 'u':
	    case 'U':
	    	{
	    		printf("vowel",alphabet);
			}
	    	break;
	    
	    default :
	    	{
	    		printf("consonant",alphabet);
			}
	}
	
	return 0;
}
