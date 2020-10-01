/* Instruction: 
A function that calls itself is known as a recursive function. The C programming language supports recursion. But while using recursion, 
one needs to be careful to define an exit condition from the function, otherwise it will go into an infinite loop.
To prevent infinite recursion,  statement (or similar approach) can be used where one branch makes the recursive call and other doesn't.
Input Format
•	The first line contains a single integer, .
•	The next line contains 3 space-separated integers, , , and .
Output Format
Print the nth term of the series, .
Sample Input 
5
1 2 3
Sample Output 
11
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
