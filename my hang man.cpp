
#include "man.h.cpp"
#include <stdlib.h>
#include <time.h> 
// full points 6 for3 w ,8 for 4w, 10 for 5w, every mistake gets -2 points

int main(){
	char three[6][4]={"bal","cam","kaz","mor","dal"};
	char four[6][5]={"erik","elma","masa","lale","mavi"};
	char five[6][6]={"kalem","dolma","kitap","ceviz","mutlu"};
	char word;
	int durum;
	int i=0,j=1,score=0,minus=0;
	printf("case1: 3letters, case2:4 letters,case3:5 letters select one of them ");
	scanf("%d",&durum);
int  a;
    
    srand(time(NULL));
    
    
    
    a = rand() % 5 ;
    printf("%d\t",a);
   



	switch(durum){
		case 1:
			 //printf("%s",three[a]);
    
			for(;i<=2;i++){
				
			    while((three[a][i]!='\0')&&(i<=2)){
			    	if(minus==7){
						printf("you have losed:(");
						break;
					}
			    printf("\nenter %d th letter:",i+1);
			    scanf("%s",&word);
			    	if(three[a][i]!=word){
					printf("Try again ");
					score--;
					minus++;
				
				}
			else{
				score+=2;
				i++;
			}
		
			}
		}
			break;
		
		case 2:
			
			//printf("%s",four[a]);
    
			for(i=0;i<4;i++){
				
			    while((four[a][i]!='\0')&&(i<4)){
			    printf("\nenter %d th letter:",j);
			    scanf("%s",&word);
			    	if(four[a][i]!=word){
					printf("Try again ");
					score--;
					minus++;
						if(minus==5){
						printf("you have losed:(");
						break;
					}
				}
			else{
				score+=2;
				i++;
				j++;
			}
		
			}
		}
    
			
			break;
		
		case 3:
				//printf("%s",five[a]);
    
			for(i=0;i<5;i++){
				
			    while((five[a][i]!='\0')&&(i<5)){
			    printf("\nenter %d th letter:",j);
			    scanf("%s",&word);
			    	if(five[a][i]!=word){
					printf("Try again ");
					score--;
					minus++;
						if(minus==6){
						printf("you have losed:(\n");
						break;
					}
				}
			else{
				score+=2;
				i++;
				j++;
			}
		
			}
		}
    
			break;
		
		
	}
	hangman(minus);
	printf("\nyour score: %d",score);
	
}
