/*Instruction:
Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.
Note:
There is no built in max function in C. 
Code that will be reused is often put in a separate function, e.g. int max(x, y) that returns the greater of the two values.
Input Format
Input will contain four integers 
Output Format
Print the greatest of the four integers.*/

#include <stdio.h>
#include <conio.h>

/*
Add function prototype here.

*/

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

