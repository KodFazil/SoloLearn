#include<stdio.h>
int main() {               
	int houses;
	scanf("%d", &houses);
	int percentage;
	if(2*100%houses==0) {
		percentage=2*100/houses;
	}
	else {
		percentage=(2*100/houses) + 1;
	}
	
	printf("%d", percentage);
	
	
	return 0;
}

