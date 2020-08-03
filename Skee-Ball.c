#include<stdio.h>
int main() {           // 3 Aðustos 2020 < Fazýl >
	int points, price, ticket=12;
	scanf("%d", &points);
	scanf("%d", &price);
	if ((points / ticket) >= price) {
		printf("Buy it!");
	} 
	else {
		printf("Try again");
	}
	
	return 0;
}
