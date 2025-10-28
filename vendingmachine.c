#include <stdio.h>

//Question 2
int main(){
	int selection;
	printf("Welcome to the vending machine!\n");
	printf("Here is the menu!\n");
	printf("1. Soda - $1.50\n2. Water - $1.00\n3. Chips - $2.00\n4. Candy - $1.25\n");
	printf("Please make a selection.");
	scanf("%d", &selection);

	switch (selection) {
		case 1:
			printf("Soda - $1.50\n");
			break;
		case 2:
			printf("Water - $1.00\n");
			break;
		case 3:
			printf("Chips - $2.00\n");
			break;
		case 4:
			printf("Candy - $1.25\n");
			break;
		default:
			printf("Invalid selection.\n");
	}

	return 0;
}
