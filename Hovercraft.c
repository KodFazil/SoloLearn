//Problem Name: Hovercraft
/*Task: Determine whether or not you made a profit based on how many of the ten 
hovercrafts you were able to sell that month */
#include<stdio.h>
int main() {         // 31 Temmuz 2020 < Fazýl >	
	//10 hovercrafts and insurance total: 21.000.000, when sale 3.000.000
	//sales of this month
	int sales, income=0, expense=21000000, piece=3000000;  
	scanf("%d", &sales);
	income = sales * piece;
	if(income > expense) {
		printf("Profit");
	}
	else if(income==expense) {
		printf("Broke Even");
	}
	else {
		printf("Loss");
	}

	return 0;
} 
