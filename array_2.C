#include <stdio.h> 
int main() 
{ 
	int a[10],i,j, n;	 
	printf("\n Enter the number of elements: ");
 	scanf("%d", &n); 
         	for (i = 0; i < n; i++)  
           	{    
         	    printf("enter elements"); 
        	    for (i = 0; i < n; i++)
                     scanf("%d", &a[i]); 
            	} 
            	for (i = 0; i < n; i++)  	
            	{ 	
            	for(j =0; j < n; j++)
             		{  
              		if(a[i] == a[j])  
               		{     
            			printf("not distinct elements\n");   
                                  exit(0); 
                 		}    
             	else       
              printf("distinct elements\n");
             }
             } 
           
}