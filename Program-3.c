//Fill in the missing code in the below sample code to count total number of uppercase and lowercase characters from the accepted string.

// Instructions:-
1) Read a string from the standard input device and write a loop to check each character, whether it is uppercase or lowercase of the given string.
2) If the given character is uppercase then increment the upper_count within the loop.
3) If the given character is lowercase then increment the lower_count within the loop.
4) Finally display the upper_count and lower_count.

//Expected input & output:-
//Enter  a string: NithinKumar
//Number of uppercase Letters = 2
//Number of lowercase Letters = 9

#include<stdio.h>
int main() {
	int upper_count = 0, lower_count = 0;
	char ch[80];
	int i;
	printf("Enter a string : ");
	scanf("%s", );                                          // Complete the statement
	i = ;                                                   // Complete the statement
	while ( )                                               // Write the condition part
{ 
		if ( )                                                // Write the condition part
{ 
			upper_count++;
		}
		if ( )                                                // Write the condition part
 { 
			lower_count++;
		}
		i++;
	}
	printf("Number of uppercase letters = %d\n",  );
	printf("Number of lowercase Letters = %d\n",  );
	return 0;
}

