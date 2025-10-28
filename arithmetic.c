#include <stdio.h>
#include <stdbool.h>
//Operators
int main(void){
	//Question 1
	printf("Question 1\n");
	int x = 0;
	printf("int x: %d\n", x);
	printf("int x++: %d\n", x++);
	x = 0;
	printf("int x: %d\n", x);
	printf("int ++x: %d\n", ++x);
	x = 0;
	printf("int x: %d\n", x);
	printf("int x--: %d\n", x--);
	x = 0;
	printf("int x: %d\n", x);
	printf("int --x: %d\n", --x);

	//Question 2
	printf("Question 2\n");
	int a = 9, b = 5;

	printf("Starting: a=%d, b=%d\n", a, b);
	a += b;
	printf("a += b: a=%d\n", a);
	a = 9;
	a -= b;
	printf("a -= b: a=%d\n", a);
	a = 9;
	a *= b;
	printf("a *= b: a=%d\n", a);
	a = 9;
	a /= b;
	printf("a /= b: a=%d\n", a);
	a = 9;
	a %= b;
	printf("a %%= b: a=%d\n", a);
	a = 9;
	a &= b;
	printf("a &= b: a=%d\n", a);
	a = 9;
	a |= b;
	printf("a |= b: a=%d\n", a);
	a = 9;
	a ^= b;
	printf("a ^= b: a=%d\n", a);
	a = 9;
	a >>= b;
	printf("a >>= b: a=%d\n", a);
	a = 9;
	a <<= b;
	printf("a <<= b: a=%d\n", a);

	//Question 3
	printf("Question 3\n");
	printf("Boolean logic\n");
	bool isLoggedIn = true;
	bool isAdmin = false;
	printf("Regular user: %s\n", (isLoggedIn && !isAdmin) ? "true" : "false");
	printf("Has access: %s\n", (isLoggedIn || isAdmin) ? "true" : "false");
	printf("Not logged in: %s\n", (!isLoggedIn) ? "true" : "false");

	printf("Using int values (1=true, 0=false)\n");
	int isLoggedInInt = 1;
	int isAdminInt = 0;

	printf("Regular user: %s\n", (isLoggedInInt && !isAdminInt) ? "true" : "false");
        printf("Has access: %s\n", (isLoggedInInt || isAdminInt) ? "true" : "false");
        printf("Not logged in: %s\n", (!isLoggedInInt) ? "true" : "false");

	//Question 4
	printf("Question 4\n");
	int a5 = 1, b5 = 0, c5 = 1;
	printf("a && b || c: %s\n", (a5 && b5 || c5) ? "true" : "false");
	printf("(a && b) || c: %s\n", ((a5 && b5) || c5) ? "true" : "false");
	printf("a || b && c: %s\n", (a5 || b5 && c5) ? "true" : "false");
	printf("(a || b) && c: %s\n", ((a5 || b5) && c5) ? "true" : "false");
	printf("!a && b: %s\n", (!a5 && b5) ? "true" : "false");

	return 0;
}
