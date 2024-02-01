#include<stdio.h>

int main(){
	int i=1,score=0,score2=0;
	
	char answer;
	printf("welcome to our mini general culture quiz, the first five questions have 8 points,last five ones have 12 points,\nwhen you select wrong answers you get for first 5 questions -2 points, last five -4 points :\n you can click X to pass the question\n");
	while(i<=10){
	if(i<=5){
	
		if(i==1){
		printf("First question:What nationality was Mozart?\n");
		printf("select a,b,c or d:\nA-German\n B-Russian\n C-Turkish\nD-Austrian ");
		scanf("%c",&answer);
		if(answer=='D') score+=8;
		else if(answer=='X') score+=0;
		else score-=2;
	}
	else if(i==2){
		printf("\nSecond question:Which female pop singer had a big hit called 'Baby, One More Time'?");
		printf("\nA-Rihanna\nB-Britney Spears\nC-Madonna\nD-Dua Lipa ");
		scanf("%s",&answer);
		if(answer=='B') score+=8;
        else if(answer=='X') score+=0;
		else score-=2;
	}
	else if(i==3){
		printf("\nQuestion 3:Which country won the 1998 FIFA World Cup football tournament? ");
		printf("\nA-Turkey\nB-Norwey\nC-Brasil\nD-France\nE-England ");
		scanf("%s",&answer);
		if(answer=='D') score+=8;
		else if(answer=='X') score+=0;
		else score-= 2;
	}
	else if(i==4){
			printf("\n Question 4:How many rings are there in the Olympic Games symbol? ");
		printf("\nA-1\nB-2\nC-3\nD-4\nE-5 ");
		scanf("%s",&answer);
		if(answer=='E') score+=8;
		else if(answer=='X') score+=0;
		else score-= 2;
		
	}
	else if(i==5){
			printf("\n Question 5:In which sport would you use a 'sand iron'?");
		printf("\nA-Volleyball\nB-Football\nC-Golf\nD-Tennis ");
		scanf("%s",&answer);
		if(answer=='C') score+=8;
		else if(answer=='X') score+=0;
		else score-= 2;
	}
	
}
    
	 else if(i>5){
	
	
	 if(i==6){
		printf("\n Question 6:Which vitamin is abundant in citrus fruits? ");
		printf("\nA-vitamin D\nB-vitamin C\nC-vitamin B12\nD-vitamin A ");
		scanf("%s",&answer);
		if(answer=='B') score2+=12;
		else if(answer=='X') score2+=0;
		else score2-= 4;
		score= score+ score2;
	}
	else if(i==7){
		printf("\n Question 7:Triton is a moon of which planet? ");
		printf("\nA-Neptune\nB-Earth\nC-Mars\nD-Sun\nE-Jupiter ");
		scanf("%s",&answer);
		if(answer=='A') score2=score2 + 12;
		else if(answer=='X') score2;
		else score2-= 4;
		score= score+ score2;
	}
	else if(i==8){
		printf("\n Question 8:In which organ of the body is the cerebrum found? ");
		printf("\nA-stomach\nB-liver\nC-heart\nD-brain\nE-kidney ");
		scanf("%s",&answer);
		if(answer=='D') score2=score2 + 12;
		else if(answer=='X') score2;
		else score2-= 4;
		score= score+ score2;
	}
	else if(i==9){
		printf("\n Question 9:In which country is the world's highest waterfall? ");
		printf("\nA-ABD\nB-China \nC-Italy\nD-Venezuela\nE-Turkey ");
		scanf("%s",&answer);
		if(answer=='D') score2+=12;
		else if(answer=='X') score2+=0;
		else score2-= 4;
		score= score+ score2;
	}
	else {
		printf("\n Question 10:Golf was first played in which country? ");
		printf("\nA-England\nB-France\nC-Scotland\nD-Russia\nE-Italy ");
		scanf("%s",&answer);
		if(answer=='C') score2+=12;
		else if(answer=='X') score2+=0;
		else score2-= 4;
		score= score+ score2;
	}
	
	
}
	
	i++;
	
	}
		printf("\nthank you for your answers , here your result:\n");
		printf("%d",score);
	
	
	

	
	
	
	
	
	
	
	
	
	
}



