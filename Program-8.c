/*Instruction:
Fill in the missing code in the below sample program to find the addition, subtraction, multiplication and division of two integer variables using functions.
In the main() function read two integer values and call the functions to do the tasks.
Write function declarations before the main() function, made calls to the functions with in main() function 
and write the definitions of the functions at the outside of the main() function.*/


#include <stdio.h>
int sum(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);
int main() {
	int a, b;
	printf("Enter two values : ");
	scanf("%d%d", &a, &b);
	printf("Addition of two values = %d\n", sum(a, b));
	printf("Subtraction of two values = %d\n", sub(a, b));
	printf("multiplication of two values = %d\n", mul(a, b));
	printf("division of two values = %d\n", div(a, b));
	return 0;
}
sum( ) { // Correct the code
	return ; 
}
sub( ) { // Correct the code
	return ;
}
mul( ) { // Correct the code
	return ; 
}
div( ) { // Correct the code
	return ; 
}

