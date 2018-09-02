#include <stdio.h>


int main()//MADE BYE FURKAN ÖZBEK :dddd

{

    int num,s1,s2,toplama,carpma,islem;
    
	islem:printf("Enter a number\n");scanf("%d",&num);
	
	if(num>=1 && num<=2)
  {
  
  printf("Choose number\n\n");
  switch (num){
  	
  	case 1:printf("toplama iþlemi:\n");
  	       printf("Enter first number\n");
  	       scanf("%d",&s1);
  	       printf("Enter second number\n");
  	       scanf("%d",&s2);
  	       printf("Result:%d\n\n",(toplama=s1+s2));break;
  	case 2:printf("carpma islemi:\n")  ;
	       printf("Enter first number\n");       
           scanf("%d",&s1);
           printf("Enter second number\n");
           scanf("%d",&s2);
           printf("Result:%d\n\n",(carpma=s1*s2));break;
           
    default: printf("Choose a number 1 or 2"); break;     
  
  }
	  }	else   {printf("You enter wrong number :DDD\n");goto islem;
	  }
	  
	  
	  
	  
	  }
	
	
	
	

