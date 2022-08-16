#include <stdio.h>
#include<conio.h>

int main()
{
    char m,t,s,f,w;
    
    
    printf("Enter day first letter: ");
    scanf("%c", &m,t,s,f,w);
    
    switch(m,t,f,s,w){
	
	     case m:
		printf("monday");
		break;
		case t:
			printf("tuesday");
			break;
		case w:
			printf("wednesday");
			break;
		case t:
			printf("thrusday");
			break;
	    case f:
	    	printf("friday");
	    	break;
	    case s:
	    	printf("saturday");
	    case s:
	    	printf("sunday");
	        break;
	    default:
	    	printf("enter correct values");}
	    	getch();
	    	return 0;
	
   
        
    }

    


