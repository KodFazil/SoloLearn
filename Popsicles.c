//Problem Name: Popsicles
/*Task: Given the number of siblings that you are giving popsicles to, determine if can 
give them each an even amount or if you give shouldn't mention the popsicles at all. */
#include<stdio.h>
int main() {                  //31 Temmuz 2020
	//first taking the number of siblings then number of popsicles
	int siblings, popsicles;
	scanf("%d %d", &siblings, &popsicles);
	if (popsicles%siblings==0) {
		printf("give away");
	}
	else {
		printf("eat them yourself");
	}
	
	return 0;
}
