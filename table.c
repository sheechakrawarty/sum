#include<stdio.h>
 
  
 int main(){
 	int math,science;
 	printf("enter your maths marks:\n");
 	scanf("%d",&math);
 	
 	printf("enter your science marks:\n");
 	scanf("%d",&science);
  	if(math>=33 && science>=33){
 		printf("congratulations!!!..you won 45/-");
	 }
	else if(math>=33 ||science>=33){
		printf("you won 15/-");
	}		
	else{
		printf("better luck next time bunny!");
	}
 	return 0;
 }
 	
 	
