//Problem Name: Deja Vu
/*Task:If you given a string of random letters, your task is to evaluate whether
any letter is repeated in the string or if you only hit unique keys while you typing. */
#include<stdio.h>      
int main() {               
	//taking a string array
	char array[10];
	int i, j;
	for(i=0;i<10;i++) {
		scanf("%s", &array[i]);
	} 
	
	int completed=0; 
	for(i=0;i<9;i++) {
		if(completed==0) { //checking for unnecessary controls
			for(j=i+1;j<10;j++) {
			if(array[i] == array[j]) {
				completed=1;
			}
		}
	}
		
	}
	if(completed==1) {
		printf("Deja Vu");	
	}
	else {
		printf("Unique");
	}
	
	return 0;
}
