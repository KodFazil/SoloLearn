#include<stdio.h>
int main() {           // 3 A�ustos 2020 < Faz�l >
	int cost=40, colorcost=5, tax=10, total=0, color; 
	scanf("%d", &color);
	total = (color * colorcost) + cost;
	if(total % tax == 0) {
		total += total / tax;
	}
	else {
		total += (total / tax) + 1;
	}
	printf("%d", total);
	
	return 0;
}
