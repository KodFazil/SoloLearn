#include<stdio.h>
int main() {
	int yards, i;
	scanf("%d", &yards);
	if(yards>10) {
		printf("High Five");
	}
	else if(yards<1) {
		printf("shh");
	}
	else if(yards<=10 && 1<=yards) {
		for(i=0;i<yards;i++) {
			printf("Ra!");
		}
	}
	

	return 0;
}
