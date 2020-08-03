// Problem Name: That's Odd..
// Task: Find the sum of all even integers in a list of numbers.

#include<stdio.h> 
int main() {              	
	//take the length of array
	int n;
	scanf("%d", &n);
	int array[n];
	int i;
	int sum=0; 
	for(i=0;i<n;i++) {
		scanf("%d", &array[i]);
		if(array[i]%2==0) {
			sum+=array[i];
		}
	}
	
	printf("Sum: %d", sum);
	
	return 0;
}
