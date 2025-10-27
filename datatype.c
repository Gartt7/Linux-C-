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
	//Using actual characters
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

	//Question 4
	printf("Question 4\n");
	//Scientific notation
	double planck = 6.62607015e-34;
	float charge = 1.6e-19;

	printf("Float(Planck's constant): %e\n", planck);
	printf("Double(charge of electron): %e\n", charge);

	//Question 5
	printf("Question 5\n");
	//Float decimal precision
	float pi = 3.14159265;

	printf("1 decimal: %.1f\n", pi);
	printf("2 decimal: %.2f\n", pi);
	printf("4 decimal: %.4f\n", pi);
	printf("6 decimal: %.6f\n", pi);

	//Question6
	printf("Question 6\n");
	//Size of data types
	printf("Size of int: %lu bytes\n", sizeof(int));
	printf("Size of float: %lu bytes\n", sizeof(float));
	printf("Size of double: %lu bytes\n", sizeof(double));
	printf("Size of char: %lu bytes\n", sizeof(char));

	//Question7
	printf("Question7\n");
	//Divison
	int int1 = 5;
	int int2 = 10;

	float div = (float)int2 / int1;
	printf("Division result: %.3f\n", div);

	float percentage =  div * 100;
	printf("As percentage: %.2f%%\n", percentage);

	//Queestion 8
	printf("Question 8\n");
	int normalInt = 1000; // standard int
	double normalDouble = 3.14; // standard double
	short int small = -100; // smaller int
	unsigned int count = 25; // only positive int
	long int big = 1234567890; // larger int
	long long int veryBig = 9223372036854775807; // very large int
	unsigned long long int huge = 18446744073709551615U; // very large, only positive
	long double precise = 3.141592653589793238L; // extended precision

	printf("int: %d\n", normalInt);
	printf("double: %f\n", normalDouble);
	printf("short int: %hd\n", small);
	printf("unsigned int: %u\n", count);
	printf("long int: %ld\n", big);
	printf("long long int: %lld\n", veryBig);
	printf("unsigned long long int %llu\n", huge);
	printf("long double %Lf\n", precise);


	return 0;
}
