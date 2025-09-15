#include <stdio.h>
#include <string.h>
	int main(){
		char Degree[10];
		char Interview[10];
		printf("Enter Degree: ");
		scanf("%s",Degree);
		printf("Did you pass the interview");
		
		if (strcmp(Degree,"MS")==0){
		    printf("Enter interview result: ");
			scanf("%s",Interview);
			if (strcmp(Interview,"Pass")==0){
			    printf("You are hired");
			}
			else {
			    printf("Not hired");
			}
		}
		else {
		    printf("Not Eligible");
		}
		
}
