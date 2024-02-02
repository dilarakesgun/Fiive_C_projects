#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
 
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
 	int n,result;
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
	 
	 
	 printf("\n\nEnter s for scissors, p for papers and r for rock");
	 scanf("%c",&you);
	 
	 result=game(you,comp);
	 if(result==-1) printf("\n\n GAME DRAW!");
	 else if(result==0) printf("\n\n YOU HAVE LOST THE GAME:(");
	 else if(result==1) printf("\n\n YOU HAVE WÝN THE GAME!");
	 printf("comp selected %c and you selected %c",comp,you);
	 
 }
