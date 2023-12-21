#include<stdio.h>

 int sum(int x,int y){
  
   return x+y;
}
 int mainus(int x,int y){
  
    return x-y;
    
    
}
 int multiplication(int x,int y){
  
    return x*y;
    
    
}
 int divison(int x,int y){
  
   return x/y;
    
    
}
 int moduluse(int x,int y){
  
    return x%y;
    
    
}
 



main(){
	
	int n,c,k;
	int a,b;
	printf("Enter first Number :-");
	scanf("%d",&a);
	printf("Enter second Number :-");
	scanf("%d",&b);
	
	printf("Press 1 for pluse :-");
	printf("Press 2 for mainus :-");
	printf("Press 3 for multiplication :-");
	printf("Press 4 for divison :-");
	printf("Press 5 for moduluse :-");
	printf("Press 0 for Exit");
	printf("Enter your choise :-");
	scanf("%d",&c);
	
	
	do{
		
		switch(c){
			case 1:
			printf("Press 1 for pluse :-");
	 		printf("Press 2 for mainus :-");
			printf("Press 3 for multiplication :-");
			printf("Press 4 for divison :-");
			printf("Press 5 for moduluse :-");
			printf("Press 0 for Exit");
			printf("Enter your choise :-");
			scanf("%d",&n);
				 
				 switch(n){
				 	case 1:
				 			
				 			printf("addtion9 is %d",sum ());
				 		break;
				    case 2:
				 			
				 			printf("mainus is %d",mainus());
				 		break;
				    case 3:
				 			
				 			printf("multiplication is %d",multiplication());
				 		break;
						 case 4:
				 			
				 			printf("divison is %d",divison());
				 		break;
						 case 5:
				 			
				 			printf("moduluse is %d",moduluse());
				 		break;
						 case 6:
				 			exit;
				 			
				 			
				 }
		}
		
	}while(n=!0)
	
	
}
