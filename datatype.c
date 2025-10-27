#include <stdio.h>
//Exercises
int main() {
	//Question 2
	int integer = 7;
	float euler = 2.71;
	double gold = 1.61803399;
	char charizard = 'G';

	printf("Question 2\n");
	printf("Integer: %d\n", integer);
	printf("Float: %f\n", euler);
	printf("Double: %f\n", gold);
	printf("Character: %c\n", charizard);

	//Question 3
	printf("Question 3\n");
	//part 1 using actual characters
	char a = 'a';
	char b = 'b';
	char c = 'c';
	char A = 'A';
	char B = 'B';
	char C = 'C';
	char x = 'x';
	char y = 'y';
	char z = 'z';
	char X = 'X';
	char Y = 'Y';
	char Z = 'Z';

	printf("a=%c, b=%c, c=%c, x=%c, y=%c, z=%c\n", a, b, c, x, y, z);
	printf("A=%c, B=%c, C=%c, X=%c, Y=%c, Z=%c\n", A, B, C, X, Y, Z);

	//Using ASCII values
	char a2 = 97;
	char b2= 98;
	char c2 = 99;
	char A2 = 65;
	char B2 = 66;
	char C2 = 67;
	char x2 = 120;
	char y2 = 121;
	char z2 = 122;
	char X2 = 88;
	char Y2 = 89;
	char Z2 = 90;

	printf("a=%c, b=%c, c=%c, x=%c, y=%c, z=%c\n", a2, b2, c2, x2, y2, z2);
	printf("A=%c, B=%c, C=%c, X=%c, Y=%c, Z=%c\n", A2, B2, C2, X2, Y2, Z2);

	return 0;
}
