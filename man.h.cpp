#include <stdio.h>
#include <conio.h>

void hangman(int minus){
	int i,j;
	switch(minus){
		case 1:
			if(minus==6){
						printf("you have losed:(");
						break;
					}
			//head
		    printf(" ");
			for(i=0;i<5;i++){
				printf("_");
				
			}
			printf("\n");
			for(j=0;j<2;j++){
				printf("|    |\n");
			}
			for(i=0;i<5;i++){
				printf("_");
				
			}
			break;
		case 2:
			if(minus==6){
						printf("you have losed:(");
						break;
					}
			//head
		    printf(" ");
			for(i=0;i<5;i++){
				printf("_");
				
			}
			printf("\n");
			for(j=0;j<2;j++){
				printf("|    |\n");
			}
			for(i=0;i<5;i++){
				printf("_");
				
			}
			//neck
			printf("\n");
			printf("  |  \n");
			break;
		case 3:
			if(minus==6){
						printf("you have losed:(");
						break;
					}
				//head
		    printf(" ");
			for(i=0;i<5;i++){
				printf("_");
				
			}
			printf("\n");
			for(j=0;j<2;j++){
				printf("|    |\n");
			}
			for(i=0;i<5;i++){
				printf("_");
				
			}
			//neck
			printf("\n");
			printf("  |  \n");
			
				//body
			printf(" ");
				for(i=0;i<3;i++){
				printf("-");
				
			}
			printf("\n ");
			for(j=0;j<1;j++){
				printf("| |\n");
			}
		    printf(" ");
			for(i=0;i<3;i++){
				printf("-");
				
			}
			break;
		
		case 4:
			if(minus==6){
						printf("you have losed:(");
						break;
					}
					//head
		    printf(" ");
			for(i=0;i<5;i++){
				printf("_");
				
			}
			printf("\n");
			for(j=0;j<2;j++){
				printf("|    |\n");
			}
			for(i=0;i<5;i++){
				printf("_");
				
			}
			//neck
				printf("\n");
			printf("  |  \n");
			
			//body
			printf(" ");
				for(i=0;i<3;i++){
				printf("-");
				
			}
			printf("\n ");
			for(j=0;j<1;j++){
				printf("| |\n");
			}
		    printf(" ");
			for(i=0;i<3;i++){
				printf("-");
				
			}
			printf("\n");
				//left arm
				
			printf("  |");
				printf("\n");
			break;
		case 5:
			if(minus==6){
						printf("you have losed:(");
						break;
					}
					//head
		    printf(" ");
			for(i=0;i<5;i++){
				printf("_");
				
			}
			printf("\n");
			for(j=0;j<2;j++){
				printf("|    |\n");
			}
			for(i=0;i<5;i++){
				printf("_");
				
			}
			//neck
				printf("\n");
			printf("  |  \n");
			
			//body
			printf(" ");
				for(i=0;i<3;i++){
				printf("-");
				
			}
			printf("\n ");
			for(j=0;j<1;j++){
				printf("| |\n");
			}
		    printf(" ");
			for(i=0;i<3;i++){
				printf("-");
				
			}
			printf("\n");
				//left arm
				
			printf("  |");
			
			//right arm
			printf("|");
			break;
	
	}
	
	
	
}
