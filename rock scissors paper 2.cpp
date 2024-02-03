#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 //players play during 10 round
 
 int game(char you,char comp){
 	if(comp==you) return -1;
 	
 	if((comp=='p') && (you=='r')){
 		return 0;
	 }
	 else if((comp=='r') && (you=='p')) return 1;
	 
	 
	  if((comp=='r' )&& (you=='s') )return 0;
	 else if((comp=='s' )&& (you=='r') )return 1;
	 
	 
	 if((comp=='s' )&& (you=='p' ) ) return 0;
	 else if((comp=='p')&& (you=='s') ) return 1;
	 
	 
	 
	 
	 
	 
	 
	 
	
	 
	 
	 
	
	 
 }
 
 int main(){
 	int n,result,y=0,c=0,i=0;
 	char you,comp;
 	// her seferinde random sayý almak icin
 	srand(time(0));
 	// sayýlarýn 100den kücük tutmak icin
 	n=rand() %100;
 	if(n>0 && n<=33){
 		comp='r';
	 }
	 else if(n>33 && n<=66){
	 	comp='s';
	 	
	 }
	 else comp='p';
	 	 

	 
	 while(i<=10){
	 	
	printf("Enter s for scissors, p for papers and r for rock");
    scanf("%s",&you);
	result=game(you,comp);
	if(result==0){
		c++;
		
	}
	 else if(result==1){
	 	y++;
	 	
	 }
	 printf("comp points %c and yours %c\n",comp,you);
	 i++;
		 
 }
 
 if(y>c) printf("\n\n YOU HAVE WÝN THE GAME!");
	 else if (c>y)  printf("\n\n YOU HAVE LOST THE GAME:(");
	 else if(c==y) printf("\n\n GAME DRAW!");
	 
	  printf("comp points %d and yours %d",c,y);
	  
}
